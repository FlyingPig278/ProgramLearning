// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,a,b,ans=0;
    cin>>x>>a>>b;
    for(int i=1;i<=x/a;i++){
        if((x-a*i)%b==0) ans++;
    }
    cout<<ans-1;
    return 0;
}
