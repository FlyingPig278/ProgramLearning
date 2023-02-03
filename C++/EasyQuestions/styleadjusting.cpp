// Created by FlyingPig278 on 2/1/23.
#pragma GCC optimize(2)
#include<bits/stdc++.h>
using namespace std;

#define lld long long

const int MAXN=1e3+5;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

int g[MAXN][MAXN];

int main(){
    int ans=-1;
    memset(g,0x7f,sizeof(g));
    int n=read(),m=read(),x=read();
    for(int i=1;i<=m;i++){
        int u=read(),v=read(),w=read();
        if(g[u][v]==0) g[u][v]=w;
        else g[u][v]=min(g[u][v],w);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(g[i][k]==0x7f7f7f7f||g[k][j]==0x7f7f7f7f) continue;
                g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }

    for(int i=1;i<=n;i++){
        if(!(g[i][x]==0x7f7f7f7f||g[x][i]==0x7f7f7f7f||i==x)) ans=max(ans,g[i][x]+g[x][i]);
    }
    cout<<ans<<endl;
    return 0;
}
