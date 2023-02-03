// Created by FlyingPig278 on 1/15/23.
#include<bits/stdc++.h>
using namespace std;
#define lld long long

lld read(){
    lld ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}
const int MAXN=3e6+5;
int sta[MAXN],top=0,a[MAXN],f[MAXN];
int main() {
    int n=read();
    for(int i=1;i<=n;i++){
        a[i]=read();
    }
    for(int i=n;i>=1;i--){
        while(top&&a[sta[top]]<=a[i]){
            top--;
        }
        f[i]=sta[top];
        sta[++top]=i;
    }
    for (int i = 1; i <=n; ++i) {
        printf("%d%c",f[i]," \n"[i==n]);
    }
    return 0;
}