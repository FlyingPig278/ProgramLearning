#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-bool-literals"
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//Warning!!!!
//#pragma GCC optimize(2)
//#pragma GCC optimize(3)
// Created by FlyingPig278 on 2/1/23.
#include<bits/stdc++.h>
using namespace std;

#define lld long long

const int MAXN=1e3+5;
const int INF=0x7f7f7f7f;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

int g[MAXN][MAXN],g2[MAXN][MAXN],dis[MAXN],dis2[MAXN];
bool flag[MAXN],flag2[MAXN];

int main(){
    memset(g,0x7f,sizeof(g));
    memset(g2,0x7f,sizeof(g2));
    int n=read(),m=read(),s=read();
    for(int i=1;i<=n;i++){
        g[i][i]=g2[i][i]=0;
    }
    for(int i=1;i<=m;i++){
        int u=read(),v=read(),w=read();
        g[u][v]=min(g[u][v],w);
        g2[v][u]=min(g2[v][u],w);
    }
    for(int i=1;i<=n;i++){
        dis[i]=g[s][i];
        dis2[i]=g2[s][i];
    }
    flag[s]=1;
    flag2[s]=1;
    for(int i=1;i<=n;i++){
        int mins=INF;
        int mins2=INF;
        int u;
        int u2;
        for(int j=1;j<=n;j++){
            if(!flag[j]&&dis[j]<mins){
                mins=dis[j];
                u=j;
            }
            if(!flag2[j]&&dis2[j]<mins2){
                mins2=dis2[j];
                u2=j;
            }
        }
        flag[u]=1;
        flag2[u2]=1;
        for(int j=1;j<=n;j++){
            if(g[u][j]!=INF){
                dis[j]=min(dis[j],dis[u]+g[u][j]);
            }
            if(g2[u2][j]!=INF){
                dis2[j]=min(dis2[j],dis2[u2]+g2[u2][j]);
            }
        }
    }
    int ans=-1;
    for(int i=1;i<=n;i++){
        if(dis[i]!=INF&&dis2[i]!=INF) ans=max(ans,dis[i]+dis2[i]);
    }
    cout<<ans;
    return 0;
}
#pragma clang diagnostic pop