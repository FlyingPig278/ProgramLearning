//Dijkstra
#include<bits/stdc++.h>
using namespace std;
#define lld long long

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}
const int MAXN=1005;

int g[MAXN][MAXN],dis[MAXN],flag[MAXN],n,m,s,idx;

void solve(int x){
    if(idx==n) return;
    int v;
    for(int i=1;i<=n;i++){
        if(!flag&&g[x][v]>g[x][i]) v=i;
    }
    flag[v]=1;
    idx++;
    for(int i=1;i<=n;i++){
        dis[i]=min(dis[i],dis[v]+g[v][i]);
    }
    solve(v);
}

int main(){
    memset(g,127,sizeof(g));
    n=read(),m=read(),s=read();
    for(int i=1;i<=n;i++){
        g[i][i]=0;
    }
    for(int i=1;i<=m;i++){
        int ss=read(),ee=read(),val=read();
        g[ss][ee]=val;
    }
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			g[i][j]=read();
//		}
//	}
    for(int i=1;i<=n;i++){
        dis[i]=g[s][i];
    }
    flag[s]=1;
    idx++;
    solve(s);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(!flag[s]&&dis[v]>g[s][j]){
//				v=i;
//			}
//		}
//	}
//	int v;
//
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}

/*
6 9 1
1 2 1
1 3 12
2 3 9
3 5 5
4 3 4
2 4 3
4 6 15
4 5 13
5 6 4
*/