// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"tie";
        return 0;
    }
    if((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1)) {
        cout<<"win";
        return 0;
    }
    cout<<"lose";
    return 0;
}
