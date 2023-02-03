// Created by ChatGPT on 2022/12/20.
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

// 创建一个大根堆
    priority_queue<int, vector<int>, greater<int> > heap;

// 边输入边处理数据
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        heap.push(x);

        // 当堆的大小大于k时，弹出堆顶元素
        if (heap.size() > k) {
            heap.pop();
        }
    }

// 输出结果
    if (heap.size() == k) {
        cout << heap.top() << endl;
    } else {
        cout << "NO RESULT" << endl;
    }

    return 0;
}