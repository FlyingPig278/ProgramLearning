//#pragma GCC optimize(2)
//#pragma GCC optimize(3)
// Created by FlyingPig278 on 1/31/23.
#include<bits/stdc++.h>
using namespace std;

#define lld long long

const int MAXN=1e5+5;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

struct edge{
    int to,next;
}e[MAXN];

int head[MAXN],head2[MAXN],idx,t,m,n,sum=1;
//bool isd=0;
stringstream ss;
bool flag[MAXN];
int da[MAXN],ds[MAXN];
void addedge(int u,int v){
    da[u]++;
    ds[v]++;
    e[++idx].to=v;
    if(head[u]==0) head[u]=head2[u]=idx;
    else{
        e[head2[u]].next=idx;
        head2[u]=idx;
    }
}

void dfs(int x){
//    if(x==0) return;
    int v=e[x].to;
    if(e[x].next==0&&sum==m) return;
    if(flag[e[head[v]].next]==0){
        if(t==1) flag[e[head[v]].next]=flag[e[head[v]].next+1]=1;
        if(t==2) flag[e[head[v]].next]=1;
        sum++;
        if(da[v]&1){
            cout<<"NO";
            exit(0);
        }
//        ss<<((e[x].next>m)?-1*(e[x].next-m):e[x].next)<<" ";
//        cout<<"-"<<v;
        if(t==2) ss<<(e[head[v]].next)<<" ";
        if(t==1) ss<<((e[head[v]].next%2==0)?(e[head[v]].next/2*-1):e[head[v]].next/2+1)<<" ";
//		ss<<x/2<<" ";
//		ss<<x<<" ";
        dfs(e[head[v]].next);
    }
    else{
//    	ss<<e[x].next<<" ";
        dfs(e[x].next);
    }
}

int main(){
    t=read();
    n=read(),m=read();
    if(m==0){
        cout<<"YES";
        exit(0);
    }
//    cin>>m>>n;
//    if(t==1){
    for(int i=1;i<=m;i++){//w
        int u,v;
        cin>>u>>v;
//            da[u]++,da[v]++,ds[u]++,ds[v]++;
        addedge(u,v);
        if(t==1) addedge(v,u);
    }
//        cout<<"edge:"<<endl;
//        for(int i=1;i<=2*m;i++){
//            cout<<e[i].to<<" "<<e[i].next<<endl;
//        }
//        cout<<endl<<"head:"<<endl;
//        for(int i=1;i<=n;i++){
//            cout<<head[i]<<" ";
//        }
//        cout<<endl<<"head2:"<<endl;
//        for(int i=1;i<=n;i++){
//            cout<<head2[i]<<" ";
//        }
//        cout<<endl;
    if(t==1) flag[1]=flag[2]=1;
    if(t==2) flag[1]=1;
//    cout<<1;
    ss<<endl<<1<<" ";
    int cnt=0;
    dfs(head[1]);
    if(sum!=n){
        cout<<"NO";
//            cout<<endl<<getD(1);
        exit(0);
    }

    cout<<"YES";
    cout<<ss.str();
//    }
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