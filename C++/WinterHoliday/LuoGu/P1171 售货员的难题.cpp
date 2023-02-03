// Created by FlyingPig278 on 1/13/23.
#include<bits/stdc++.h>
using namespace std;

inline long long read(){
    long long ans=0,f=1;char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}

const int MAXN=20;

int dp[1<<MAXN][MAXN],a[MAXN][MAXN];

int main() {
    int n=read(),all=(1<<n)-1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j]=read();
        }
    }
    for (int i = 0; i < n; ++i) {
        a[i][i]=1e8;
    }
    memset(dp,127,sizeof(dp));
    dp[0][0]=0;
    for (int i = 0; i <=all; ++i) {
        for (int x = 0; x < n; ++x) {
            if(dp[i][x]!=0x7f7f7f7f){
                for (int y = 0; y < n; ++y) {
                    if(!(i&1<<y)){
                        dp[i|1<<y][y]=min(dp[i|1<<y][y],dp[i][x]+a[x][y]);
                    }
                }
            }
        }
    }
    cout<<dp[all][0];
    return 0;
}