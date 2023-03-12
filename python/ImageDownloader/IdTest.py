import requests
from bs4 import BeautifulSoup

idx=[]


def download_images(url):
    # 获取网页 HTML
    global maxn
    response = requests.get(url)
    html = response.text

    # 创建 BeautifulSoup 实例
    soup = BeautifulSoup(html, 'html.parser')

    # 找到所有包含图片的元素
    album_wrappers = soup.find_all('a', class_='album-wrapper')

    # 循环处理每个包含图片的元素
    for album_wrapper in album_wrappers:
        # 获取图片 URL
        id = album_wrapper.attrs.get('id')
        idx.append(id)


print(f'开始搜索主页')
for i in range(2, 59):
    url = 'https://tuci.vip/?page=' + str(i)
    download_images(url)

    # 计算下载进度并输出
    progress = (i - 2) / 57 * 100  # 计算下载进度百分比
    print(f'当前搜索进度：{progress:.2f}%')
print(f'当前搜索进度：100.00%')
print(f'搜索完成')
print(idx)
