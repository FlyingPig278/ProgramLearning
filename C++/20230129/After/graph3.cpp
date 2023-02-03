// Created by FlyingPig278 on 1/29/23.
//链式前向星存储及其遍历
#include<bits/stdc++.h>
using namespace std;

#define lld long long

const int MAXN=10005;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

struct edge{
	int to,next/*,w*/;
}e[MAXN];

int head[MAXN],idx;

void addedge(int u,int v /*,int w*/){
	e[++idx].to=v;
	/*e[idx].w=w;*/
	e[idx].next=head[u];
	head[u]=idx;
}

bool flag[MAXN];

void dfs(int x){
	if(x==0) return;
	int v=e[x].to;
	if(flag[v]==0){
		flag[v]=1;
		cout<<"-"<<v;
		dfs(head[v]);
	}
	else{
		dfs(e[x].next);
	}
}

int main(){
	int n,m;
	cin>>m>>n;
	for(int i=1;i<=n;i++){//w
		int u,v;
		cin>>u>>v;
		addedge(u,v);
		addedge(v,u);
	}
	flag[1]=1;
	cout<<1;
	dfs(head[1]);
//	for(int i=head[1];i>0;i=e[i].next){
//		printf("%d",head[i]);
//	}
	return 0;
}

/*
9 15
1 2
1 6
2 3
2 9
2 7
3 4
3 9
4 5
4 8
4 7
4 9
5 6
5 8
6 7
7 8
*/ 

//1 2 3 4 5 6 7 8 9

