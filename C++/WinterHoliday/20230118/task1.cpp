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

void dfs(){
	
}

int main(){
	int n=read(),k=read(),ans=0;
	dfs();
	printf("%d",ans);
	return 0;
}
