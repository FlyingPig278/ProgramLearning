// Created by FlyingP on 1/13/23.

#include <bits/stdc++.h>
using namespace std;

inline long long read(){
    long long ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}

const int MOD=9999973,MAXN=105;

int dp[MAXN][MAXN][MAXN];

int main(){
    int n=read(),m=read();
    dp[0][0][0]=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<=m;++j){
            for(int k=0;k<=m;++k){
                if(dp[i][j][k]){
                    int p=m-j-k;
                    dp[i+1][j][k]=(dp[i][j][k]+dp[i+1][j][k])%MOD;
                    if(p>=1) dp[i+1][j+1][k]=((long long)p*dp[i][j][k]+dp[i+1][j+1][k])%MOD;
                    if(j>=1) dp[i+1][j-1][k+1]=((long long)j*dp[i][j][k]+dp[i+1][j-1][k+1])%MOD;
                    if(p>=2) dp[i+1][j+2][k]=((long long)p*(p-1)/2%MOD*dp[i][j][k]+dp[i+1][j+2][k])%MOD;
                    if(j>=2) dp[i+1][j-2][k+2]=((long long)j*(j-1)/2%MOD*dp[i][j][k]+dp[i+1][j-2][k+2])%MOD;
                    if(p>=1&&j>=1) dp[i+1][j][k+1]=((long long)p*j%MOD*dp[i][j][k]+dp[i+1][j][k+1])%MOD;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<=m;++i){
        for(int j=0;j<=m;++j){
            ans=(ans+dp[n][i][j])%MOD;
        }
    }
    printf("%d\n",ans);
    return 0;
}