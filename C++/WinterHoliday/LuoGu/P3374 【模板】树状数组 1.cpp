// Created by FlyingPig278 on 1/14/23.
#include<bits/stdc++.h>
using namespace std;

inline long long read(){
    long long ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans*f;
}

const int MAXN=5e5+5;

int n,m;
struct Bitset{
    int c[MAXN];
    void add(int pos,int v){
        for (int x = pos; x <=n;x+=x&-x) {
            c[x]+=v;
        }
    }
    long long query(int pos){
        long long ans=0;
        for(int x=pos;x;x-=x&-x){
            ans+=c[x];
        }
        return ans;
    }
}bit;

int main() {
    n=read(),m=read();
    for (int i = 1; i <=n; ++i) {
        bit.add(i,read());
    }
    for (int i = 1; i <=m ; ++i) {
        int op=read(),x=read(),y=read();
        if(op==1) bit.add(x,y);
        else printf("%lld\n",bit.query(y)-bit.query(x-1));
    }
    return 0;
}