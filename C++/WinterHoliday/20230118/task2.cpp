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

int MAXN=1005;

int gcd(int m, int n){
	while (n != 0){
		int t = m % n;
		m = n;
	  	n = t;
	}
    return m;
}

int min(int a,int b,int c,int d,int e){
	return min(a,min(b,min(c,min(d,e))));
}

int yf(int a,int b){
	if(gcd(a,b)==1) return a+b;
	return a/gcd(a,b)+b/gcd(a,b);
}

int n=read(),q=read(),ans=0x7f7f7f7f;
int aa1,aa2;
int bb1,bb2;
void solve(int a1,int b1,int a2,int b2){
	int a3=a1+a2;
	int b3=b1+b2;
	ans=min(0x7f7f7f7f,ans,a3,b3,yf(a3,b3));
	if(yf(a3,b3)>n&&a3>n&&b3>n&&yf(a3,b3)>n){
		return;
	}
//	cout<<min(a1+b1,a2+b2,(gcd(a3,b3)==1)?a3+b3:a3/gcd(a3,b3)+b3/gcd(a3,b3))<<endl;
//	cout<<min(a1+b1,a2+b2,yf(a3,b3),yf(a3+a2,b3+b2),min(yf(a3+a1,b3+b1),yf(a3+a1+a1,b3+b1+b1),yf(a3+a2+a2,b3+b2+b2),))<<endl;
//	if(yf(a3,b3)<yf(a1,b1)&&yf(a3,b3)<yf(a2,b2)&&a3<=n&&b3<=n){
		solve(a1,b1,a3,b3);
		solve(a2,b2,a3,b3);
//	}
}

int main(){
	for(int i=1;i<=q;i++){
		aa1=read(),aa2=read();
		bb1=read(),bb2=read();	
		solve(aa1,aa2,bb1,bb2);
		cout<<ans<<endl;
		ans=0x7f7f7f7f;
	}
	return 0;
}
