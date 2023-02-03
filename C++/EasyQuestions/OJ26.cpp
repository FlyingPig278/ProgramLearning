// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int num[5];

void candy(int flag){
    num[(flag-1>=0)?flag-1:4]+=num[flag]/3;
    num[(flag+1<=4)?flag+1:0]+=num[flag]/3;
    num[flag]/=3;
}

int main() {
    for(int i=0;i<=4;i++){
        cin >> num[i];
    }
    for(int i=0;i<=4;i++){
        candy(i);
    }
    for(int i=0;i<=4;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
