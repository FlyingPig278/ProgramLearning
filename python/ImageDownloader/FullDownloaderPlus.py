import os
import time

import requests
from bs4 import BeautifulSoup

process = 0


def download_images(url, session):
    page = 1
    while True:
        # 获取网页 HTML
        if page == 1:
            response = session.get(url)
        else:
            response = session.get(url + f'&page={page}')
        page += 1
        html = response.text

        # 创建 BeautifulSoup 实例
        soup = BeautifulSoup(html, 'html.parser')

        pages = soup.find_all('div', {'class': f'page-{page - 1}'})
        if page > 2 and not pages:
            break

        # 找到所有包含图片的元素
        entrys = soup.find_all('div', class_='entry')

        exist = False

        # 循环处理每个包含图片的元素
        for entry in entrys:
            exist = True

            # 获取图片 URL
            img_url = entry.contents[1].attrs.get('src')

            # 获取图片标题
            title = entry.contents[1].attrs.get('alt')

            # 将标题按空格分为人名和内容
            name, content = title.split(' ', 1)
            name = name.replace(' ', '')
            content = content.replace(' ', '')
            index = img_url.split('_')[2]
            sava_image(name, content, index, img_url, session)
        if not exist:
            break


def sava_image(name, content, index, img_url, session):
    global process
    # 创建子目录并保存图片
    dir_path = os.path.join('images', name, content)
    if not os.path.exists(dir_path):
        os.makedirs(dir_path)
    file_path = os.path.join(dir_path, f'{index}.jpg')
    process += 1
    if os.path.exists(file_path):
        return
    else:
        with open(file_path, 'wb') as f:
            f.write(session.get(img_url).content)


def login(email, password):
    if email == '-1':
        email = '983087858@qq.com'
    if password == '-1':
        password = '1101101151'
    # 创建一个 Session 对象来保持 cookie 和其他状态信息
    session = requests.Session()

    # 发送 GET 请求以获取 CSRF 令牌和其他 cookie
    response = session.get('https://tuci.vip/login/?next=/')

    # 从响应中解析出 CSRF 令牌
    soup = BeautifulSoup(response.text, 'html.parser')
    csrf_token = soup.find('input', {'name': 'csrfmiddlewaretoken'})['value']

    # 准备登录表单数据
    login_data = {
        'csrfmiddlewaretoken': csrf_token,
        'email': email,
        'password': password,
    }

    headers = {
        'referer': 'https://tuci.vip/login/?next=/'
    }

    # 发送登录 POST 请求
    response = session.post('https://tuci.vip/login/?next=/', data=login_data, headers=headers)

    # 检查登录是否成功，如果返回的状态码不是 200，则表示登录失败
    if response.status_code != 200:
        exit('出现未知错误！')
    else:
        if 'sessionid' in response.cookies:
            print('登录成功！')
            return session
        else:
            exit('输入的账号密码错误！')


def start_download(download_range):
    global process
    print(f'开始下载详情页')
    for i in download_range:
        url = f'https://tuci.vip/album/detail/{i}/?category=&'
        try:
            download_images(url, session)
            print(f'已下载:{process / 25404 * 100:.2f}%')
        except requests.exceptions.RequestException as e:
            print(f'出现异常: {e}')
            print(f'等待10s后继续下载')
            time.sleep(10)
            i -= 1
            continue


email = input('请输入账号：')
password = input('请输入密码：')
session = login(email, password)
start_download(range(1, 1001))
print(f'下载完成')
