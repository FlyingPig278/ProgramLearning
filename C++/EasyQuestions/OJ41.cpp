// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(c>d) swap(c,d);
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    if(a+2==b&&b+2==c&&c+2==d){
        printf("%d+2=%d\n",a,b);
        printf("%d+2=%d\n",b,c);
        printf("%d+2=%d\n",c,d);
        return 0;
    }
    cout<<d<<" "<<c<<" "<<b<<" "<<a;
    return 0;
}
