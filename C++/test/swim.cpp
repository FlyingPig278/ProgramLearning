// Created by FlyingPig278 on 2023/1/13.
#include<bits/stdc++.h>
using namespace std;

char Map[800][800];
int n,m,Next[8][2]={{0,1},{1,0},{0,-1},{-1,0}},maxn=0,temp;
bool Book[800][800];

int bfs(int x,int y,int ans);

struct node{
    int x,y,ans;
}q[5432100];

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>Map[i][j];
            Map[i][j]-='0';
        }
    }
//	bfs(1,1);
    for(int k=1;k<=9;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(Map[i][j]==k&&Book[i][j]==0){
                    temp=bfs(i,j,k);
                    if(maxn<temp) maxn=temp;
                }
            }
        }
    }
    cout<<maxn;
    return 0;
}

int bfs(int x,int y,int ans){
    int head=0,tail=0;
    Book[x][y]=true;
    q[tail].x=x;
    q[tail].y=y;
//	q[tail].s=step;
    tail++;
    while(head<tail){
        for(int k=0;k<=3;k++){
            int tx=q[head].x+Next[k][0];
            int ty=q[head].y+Next[k][1];
            if(tx>n||ty>m||tx<=0||ty<=0) continue;
            if(Map[tx][ty]==ans&&Book[tx][ty]==0){
                Book[tx][ty]=true;
                q[tail].x=tx;
                q[tail].y=ty;
                tail++;
            }
        }
        head++;
    }
    return tail;
}
