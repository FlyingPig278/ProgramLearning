// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b==2*c&&abs(a-b)==2)||(a+c==2*b&&abs(a-c)==2)||(b+c==2*a&&abs(b-c)==2)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}
