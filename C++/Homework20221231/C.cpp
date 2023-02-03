// Created by FlyingPig278 on 2022/12/31.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,b;
    string a;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a>>b;

        if(a=="AND") &=b;
        if(a=="OR") ^=b;
        if(a=="XOR") |=b;
    }
    return 0;
}
