// Created by ChatGPT on 2022/12/21.
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 5005;

int p[N]; // 并查集数组，p[i] 表示 i 的父亲

int find(int x) // 寻找 x 的祖先
{
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    // 初始化并查集
    for (int i = 1; i <= n; i ++ ) p[i] = i;

    while (m -- ) // 处理亲戚关系
    {
        int x, y;
        cin >> x >> y;
        int px = find(x), py = find(y); // 找到 x 和 y 的祖先
        if (px != py) p[px] = py; // 将 x 和 y 的祖先合并，即建立亲戚关系
    }

    while (q -- ) // 处理询问
    {
        int x, y;
        cin >> x >> y;
        int px = find(x), py = find(y); // 找到 x 和 y 的祖先
        if (px == py) cout << "Yes" << endl; // x 和 y 的祖先相同，说明 x 和 y 有亲戚关系
        else cout << "No" << endl; // 否则没有亲戚关系
    }

    return 0;
}
