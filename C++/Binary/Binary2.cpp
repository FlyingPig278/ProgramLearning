// Created by FlyingPig278 on 2022/12/31.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ans=0;
    cin>>a>>b;
    while(max(a,b)!=0){
        ans+=((a&1)^(b&1));
        a>>=1;
        b>>=1;
    }
    cout<<ans;
    pow(5,3);
    return 0;
}