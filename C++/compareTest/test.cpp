#include<bits/stdc++.h>
using namespace std;

long long read(){
    long long ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)){
        f*=(ch=='-') ?-1:1;
        ch=getchar();
    }
    while(isdigit(ch)){
        ans=(ans<<1)+(ans<<3)+(ch^48);
        ch=getchar();
    }
    return ans*f;
}

const int MAXN=10;
long long Dp[2][1<<MAXN][1<<MAXN][43],ans;
int cnt[1<<MAXN],k,n,all;

int main(){
    n=read(),k=read();
    all=(1<<n)-1;
    for(int i=1;i<=all;i++){
        cnt[i]=cnt[i>>1]+(i&1);
    }
    Dp[0][0][0][0] = 1;
    for(int i=0,now=0;i<n;i++,now^=1){
        memset(Dp[now^1],0,sizeof(Dp[now^1]));
        for(int v1=0;v1<=all;v1++){
            for(int v2=0;v2<=all;v2++){
                if(!((v1<<2|v1>>2)&v2)){
                    for(int j=cnt[v1]+cnt[v2];j<=k;j++){
                        if(Dp[now][v1][v2][j]){
                            int t=(v1<<1|v1>>1|v2<<2|v2>>2)&all;
                            for(int s=all^t,v3=s;v3;v3=s&v3-1){
                                Dp[now^1][v2][v3][j+cnt[v3]]+=Dp[now][v1][v2][j];
                            }
                            Dp[now^1][v2][0][j]+=Dp[now][v1][v2][j];
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<=all;i++){
        for(int j=0;j<=all;j++){
            ans+=Dp[n&1][i][j][k];
        }
    }
    printf("%lld",ans);
    return 0;
}