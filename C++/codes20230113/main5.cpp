#include<bits/stdc++.h>
using namespace std;

inline long long read(){
    long long ans=0,f=1;char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}

int main(){
    int a=read(),b=read();

    return 0;
}