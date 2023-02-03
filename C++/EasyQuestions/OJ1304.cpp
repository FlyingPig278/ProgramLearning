// Created by FlyingPig278 on 1/31/23.
#include<bits/stdc++.h>
using namespace std;
#define lld long long

const int MAXN=20;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

int n,g[MAXN][MAXN],flag[MAXN];
deque<int> q1,q2;
priority_queue<string,vector<string>,greater<string> > e;
void dfs(int x){
    if(x==n){
        stringstream ss;
        q2=q1;
        ss<<q2.front();
        q2.pop_front();
        while(!q2.empty()){
            ss<<"-"<<q2.front();
            q2.pop_front();
        }
        ss<<endl;
        e.push(ss.str());
        return;
    }
    for(int i=0;i<=n;i++){
        if(g[x][i]&&!flag[i]){
            q1.push_back(i);
            flag[i]=1;
            dfs(i);
            flag[i]=0;
            q1.pop_back();
        }
    }
}

int main(){
    n=read();
    for(int i=0;i<=n;i++){
        if(i<=n) g[i][i+1]=1;
        if(i+2<=n) g[i][i+2]=1;
    }
    q1.push_back(0);
    dfs(0);
    while(!e.empty()){
        cout<<e.top();
        e.pop();
    }
    return 0;
}