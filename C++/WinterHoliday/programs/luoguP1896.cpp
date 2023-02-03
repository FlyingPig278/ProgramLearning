// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

inline long long read(){
	long long ans=0,f=1;char ch=getchar();
	while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
	while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
	return ans*f;
}

inline bool judge(int val){
    return !(val & val<<1);
}

const int  MAXN=10;
long long Dp[1<<MAXN][MAXN][MAXN*MAXN];
int cnt[1<<MAXN];

int main() {
    int n=read(),k=read(),all=(1<<n)-1;
    Dp[0][0][0]=1;
    for (int i = 1; i <=all ; ++i) {
        cnt[i]=cnt[i>>1]+(i&1);
    }
    for (int i = 0; i <n ; ++i) {
        for (int val = 0; val <=all ; ++val) {
            for (int j = 0; j <=k ; ++j) {
                if(Dp[val][i][j]) {
                    for (int val2 = 0; val2 < 1 << n; ++val2) {
                        if (judge(val2) && !((val << 1 | val | val >> 1) & val2))
                            Dp[val2][i+1][j+cnt[val2]] += Dp[val][i][j];
                    }
                }
            }
        }
    }
    long long ans=0;
    for (int i = 0; i <=all ; ++i) {
        ans+=Dp[i][n][k];
    }
    printf("%lld",ans);
    return 0;
}
