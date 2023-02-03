// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    char a,b,c;
    cin>>a>>b>>c;
    if(a<b) swap(a,b);
    if(b<c) swap(b,c);
    if(a<b) swap(a,b);
    cout<<(char)a<<(char)b<<(char)c;
    return 0;
}
