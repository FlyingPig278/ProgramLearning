#include <bits/stdc++.h>
using namespace std;
long long read(){
	long long ans=0,f=1;
	char ch=getchar();
	while(!isdigit(ch)){
		f*=(ch=='-')?-1:1;
		ch=getchar();
	}
	while(isdigit(ch)){
		ans=ans*10+ch-'0';
		ch=getchar();
	}
	return ans*f;
}
const int MAXN=10,MAXM=105;
int Dp[1<<MAXN],valon[MAXM],valoff[MAXM];
int m,n,all;
queue<int> Q; 
int main() {
	n=read();
	m=read();
	all=(1<<n)-1;
	memset(Dp,0x7f,sizeof(Dp));
	for(int i=1;i<=m;i++){
		valoff[i]=all;
		for(int j=0;j<n;j++){
			int t=read();
			if(t==1){
				valoff[i]^=1<<j;
			}
			else if(t==-1){
				valon[i]^=1<<j;
			}
		}
	}
	Dp[all]=0;
	Q.push(all);
	while(!Q.empty()){
		int val=Q.front();
		Q.pop();
		for(int i=1;i<=m;i++){
			int val2=val;
			val2=(val2|valon[i])&valoff[i];
			if(Dp[val2]>Dp[val]+1){
				Dp[val2]=Dp[val]+1;
				Q.push(val2);
			} 
		}
	}
	printf("%d\n",Dp[0]==2139062143?-1:Dp[0]);
	return 0;
}