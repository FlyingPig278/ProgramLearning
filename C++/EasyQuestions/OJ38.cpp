// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=25;
    if(n>10) ans+=n*15-150;
    printf("%.2f",ans/10.0);
    return 0;
}
