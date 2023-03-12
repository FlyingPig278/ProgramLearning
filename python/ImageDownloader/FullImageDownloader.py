import os
import time

import requests
from bs4 import BeautifulSoup


def download_images(url):
    # 获取网页 HTML
    response = requests.get(url)
    html = response.text

    # 创建 BeautifulSoup 实例
    soup = BeautifulSoup(html, 'html.parser')

    # 找到所有包含图片的元素
    entrys = soup.find_all('div', class_='entry')

    # 循环处理每个包含图片的元素
    index = 1
    for entry in entrys:
        # 获取图片 URL
        img_url = entry.contents[1].attrs.get('src')

        # 获取图片标题
        title = entry.contents[1].attrs.get('alt')

        # 将标题按空格分为人名和内容
        name, content = title.split(' ', 1)
        name = name.replace(' ', '')
        content = content.replace(' ', '')
        # 创建子目录并保存图片
        dir_path = os.path.join('images', name)
        if not os.path.exists(dir_path):
            os.makedirs(dir_path)
        file_path = os.path.join(dir_path, f'{content}__{index}.jpg')
        index += 1
        if os.path.exists(file_path):
            continue
        else:
            with open(file_path, 'wb') as f:
                f.write(requests.get(img_url).content)


print(f'开始下载详情页')
for i in range(1, 1001):
    url = f'https://tuci.vip/album/detail/{i}/?category=&'
    try:
        download_images(url)
    except requests.exceptions.RequestException as e:
        print(f'出现异常: {e}')
        print(f'等待10s后继续下载')
        time.sleep(10)
        i -= 1
        continue

    # 计算下载进度并输出
    print(f'当前下载进度：{i}/1000')
print(f'下载完成')
