import json
import os
import subprocess

# 读取json文件
with open('Videos/json/videos.js', 'r') as f:
    videos = json.load(f)

# 循环遍历视频列表
for video in videos:
    # 获取要修改的文件路径
    filepath = os.path.join('Videos/', video['custom_filename'])
    # 构造exiftool命令
    cmd = [r'Exiftool.exe -r -api "QuickTimeUTC" "-CreateDate=2020:05:05 00:00:00" "F:\实际测试用\Videos\010_1075_0b53jd4sbeyaoaagt44gnnqtgsaeeaeqad2a.f0.mp4"']
    subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
