// Created by FlyingPig278 on 2022/12/31.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        ans^=a;
    }
    cout<<ans;
    return 0;
}
