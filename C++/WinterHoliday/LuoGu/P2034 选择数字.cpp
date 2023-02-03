#include<bits/stdc++.h> 
using namespace std;
#define lld long long

lld read(){
	lld ans=0,f=1;
	char ch=getchar();
	while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
	while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
	return ans*f;
}

const int MAXN=1e6+5;

lld dp[MAXN],sum[MAXN];
int L=1,R=0,Q[MAXN];

int main(){
	int n=read(),k=read();
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+read();
	}
	for(int i=1;i<=n;i++){
		while(L<=R&&Q[L]<i-k-1) L++;
		while(L<=R&&dp[Q[R]]-sum[Q[R]]<=dp[i-1]-sum[i-1]) R--;
		Q[++R]=i-1;
		dp[i]=sum[i-1]+dp[Q[L]]-sum[Q[L]];
	}
	lld ans=0;
	for(int i=n-k;i<=n;i++){
		ans=max(ans,dp[i]+sum[n]-sum[i]);
	}
	cout<<ans;
	return 0;
}