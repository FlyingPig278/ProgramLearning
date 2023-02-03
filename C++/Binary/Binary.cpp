// Created by FlyingPig278 on 2022/12/31.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    //题一：打印所有小于a的2的整数次幂
//    while(a){
//        if(a&(a-1)) a=a&(a-1);
//        cout<<a<<" ";
//        a=a>>1;
//    }

    //题2：打印出小于等于a的最接近a的2的整数次幂
    while(a&(a-1)){
        a=a&(a-1);
    }
    cout<<a;
    return 0;
}