// Created by FlyingPig278 on 2022/12/15.
#include<bits/stdc++.h>
using namespace std;

const int MAXN=100001;
int n;
int t[MAXN];

void lastOrder(int x){
    if(t[x]!=0){
        lastOrder(2*x);
        lastOrder(2*x+1);
        cout<<t[x]<<" ";
    }
}

int main(){
    cin>>n;
    for(int k=1;k<=2;k++){
        for(int i=1;i<=n;i++){
            cin>>t[i];
        }
    }
    lastOrder(1);
    return 0;
}
