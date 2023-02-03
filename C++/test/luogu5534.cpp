// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a,b,n;
    cin>>a>>b>>n;
    int delta=b-a;
    int ans=0;
    for(signed i=1;i<=n;i++){
        ans+=a;
        a+=delta;
    }
    cout<<ans;
    return 0;
}