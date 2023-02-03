// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b) swap(a,b);
    if(b<c) swap(b,c);
    if(a<b) swap(a,b);
    if(c+b<=a){
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
    return 0;
}
