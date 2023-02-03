// Created by FlyingPig278 on 2023/1/29.
#include<bits/stdc++.h>
using namespace std;
#define lld long long
//装逼的read()
lld read(){
    lld ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}
const int MAXN=105;
//m,n为地图的行列，ans为最终答案，s为每次dfs()后的面积
int n=read(),m=read(),ans,s=1;
//maps存储地图，flag作为标记数组
int maps[MAXN][MAXN],flag[MAXN][MAXN];
//方向数组
int Next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
void dfs(int i,int j){
    //判断是否四个方向都不能构成连通块，如果都不能就return
    int t=0;
    for(int k=0;k<=3;k++){
        int ii=i+Next[k][0],jj=j+Next[k][1];
        if(maps[ii][jj]!=maps[i][j]||flag[ii][jj]==1) t++;
    }
    if(t==4){
        return;
    }
    //遍历每个方向
    for(int k=0;k<=3;k++){
        //ii和jj为移动后的i,j
        int ii=i+Next[k][0],jj=j+Next[k][1];
        //检查是否越界
        if(maps[ii][jj]!=maps[i][j]||flag[ii][jj]==1){
            continue;
        }
        //如果碰见了一个还没有打标的，就打标，并且面积+1
        if(flag[ii][jj]!=1){
            flag[ii][jj]=1;
            s++;
        }
        //在变化后的i和j处再次遍历
        dfs(ii,jj);
    }
}

int main(){
    //读取地图
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            maps[i][j]=getchar()-'0';
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            //检查该方块是否走过
            if(flag[i][j]==1) continue;
            //如果未走过，标记为走过
            flag[i][j]=1;
            //在i,j处进行dfs()
            dfs(i,j);
            //一次dfs()结束，统计最大s至ans中
            ans=max(ans,s);
            //初始化面积为1
            s=1;
        }
    }
    //输出答案
    cout<<ans;
    return 0;
}

//测试数据：
/*
输入：
3 3
124
224
152

 输出：
 3
 */