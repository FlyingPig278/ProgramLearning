#include <bits/stdc++.h>
using namespace std;

long long read(){
    long long ans=0;
    char ch=getchar();
    while(!isdigit(ch)) ch=getchar();
    while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
    return ans;
}

const int MOD=998244353,MAXN=1000005;

int f[MAXN],g[MAXN],ans[MAXN];

void f_or(int*val,int n,int op=1){
    for(int len=1;len<n;len*=2)
        for(int i=0;i<n;i+=len*2)
            for(int j=0;j<len;j++){
                int x=val[i+j],y=val[i+j+len];
                if(op==1) val[i+j+len]=y+x;
                else val[i+j+len]=y-x;
            }
}

int main(){
    for(int i=0;i<=7;i++)
        f[i]=g[i]=1;
    f_or(f,7,1);
    f_or(g,7,1);
    for(int i=0;i<=7;i++)
        ans[i]=f[i]*g[i];
    f_or(ans,7,-1);
    for(int i=0;i<=7;i++)
        printf("%d%c",ans[i]," \n"[i==7]);
    return 0;
}