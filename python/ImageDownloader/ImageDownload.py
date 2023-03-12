import requests
from bs4 import BeautifulSoup

idx = []


def download_images(url, i):
    response = requests.get(url)
    html = response.text

    # 创建 BeautifulSoup 实例
    soup = BeautifulSoup(html, 'html.parser')

    entrys = soup.find('div', class_='entry')
    if entrys is not None:
        idx.append(i)


print(f'开始搜索可用ID')
for i in range(1, 1001):
    url = f'https://tuci.vip/album/detail/{i}/?category=&'
    download_images(url, i)

    # 计算下载进度并输出
    progress = (i - 2) / 57 * 100  # 计算下载进度百分比
    # 计算下载进度并输出
    print(f'当前搜索进度：{i}/1000')
print(f'搜索完成')
print(idx)
