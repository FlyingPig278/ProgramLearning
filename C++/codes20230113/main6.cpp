// Created by FlyingPig278 on 1/13/23.
#include<bits/stdc++.h>
using namespace std;

inline long long read(){
    long long ans=0,f=1;char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}

const int MOD=998244353,MAXN=1000005;

int f[MAXN],g[MAXN],ans[MAXN];

void f_or(int *val,int n,int op=1){
    for(int len=1;len<n;len++){
        for (int i = 0; i < n; i+=len*2) {
            for (int j = 0; j < len; ++j) {
                int x=val[i+j],y=val[i+j+len];
                if(op==1) val[i+j+len]=y+x;
                else val[i+j+len]=y-x;
            }
        }
    }
}

int main() {
    int n=read(),all=(1<<n)-1;

    for (int i = 0; i <= all; ++i) {
        for (int j = 0; j <= all; ++j) {
            ans[i|j]+=f[i]*g[j];
        }
    }
    return 0;
}

