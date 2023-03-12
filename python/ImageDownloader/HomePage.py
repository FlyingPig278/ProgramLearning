import os
import requests
from bs4 import BeautifulSoup


def download_images(url):
    # 获取网页 HTML
    response = requests.get(url)
    html = response.text

    # 创建 BeautifulSoup 实例
    soup = BeautifulSoup(html, 'html.parser')

    # 找到所有包含图片的元素
    album_wrappers = soup.find_all('a', class_='album-wrapper')

    # 循环处理每个包含图片的元素
    for album_wrapper in album_wrappers:
        # 获取图片 URL
        img_url = album_wrapper.contents[1].attrs.get('style').split("'")[1]

        # 获取图片标题
        title = album_wrapper.text.replace('\n', '')

        # 将标题按空格分为人名和内容
        name, content = title.split(' ', 1)

        # 创建子目录并保存图片
        dir_path = os.path.join('images', name)
        if not os.path.exists(dir_path):
            os.makedirs(dir_path)
        file_path = os.path.join(dir_path, f'{content}.jpg')
        if os.path.exists(file_path):
            continue
        else:
            with open(file_path, 'wb') as f:
                f.write(requests.get(img_url).content)


print(f'开始下载主页')
for i in range(2, 59):
    url = 'https://tuci.vip/?page=' + str(i)
    download_images(url)

    # 计算下载进度并输出
    progress = (i - 2) / 57 * 100  # 计算下载进度百分比
    print(f'当前下载进度：{progress:.2f}%')
print(f'当前下载进度：100.00%')
print(f'下载完成')
