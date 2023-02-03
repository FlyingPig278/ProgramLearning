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

const int MAXN=1e6+5;

int Q[MAXN],L=1,R=0,a[MAXN];

int main(){
    int n=read(),k=read();
    for(int i=1;i<=n;i++){
        a[i]=read();
    }
    for(int i=1;i<=n;i++){
        while(L<=R&&Q[L]<=i-k){
            L++;
        }
        while(L<=R&&a[Q[R]]>=a[i]){
            R--;
        }
        Q[++R]=i;
        if(i>=k) printf("%d%c",a[Q[L]]," \n"[i==n]);
    }
    L=1,R=0;
    for(int i=1;i<=n;i++){
        while(L<=R&&Q[L]<=i-k){
            L++;
        }
        while(L<=R&&a[Q[R]]<=a[i]){
            R--;
        }
        Q[++R]=i;
        if(i>=k) printf("%d%c",a[Q[L]]," \n"[i==n]);
    }
    return 0;
}