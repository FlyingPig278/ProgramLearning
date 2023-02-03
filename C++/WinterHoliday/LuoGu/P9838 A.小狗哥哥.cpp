#include<bits/stdc++.h> 
using namespace std;

const int MAXN=1e5+5;
int n,m,num[MAXN];
const double inf=numeric_limits<double>::infinity();
struct range{
	double a=-1,b=inf;
}r[MAXN];

int main(){
//	freopen("game2.in","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	for(int i=1;i<=n;i++){
		r[i].a=(double)m/(num[i]*i);
		r[i].b=(double)m/((num[i]-1)*i);
		if(r[i].a>r[0].a) r[0].a=r[i].a;
		if(r[i].b<r[0].b) r[0].b=r[i].b;
	}
	if(r[0].b==inf) {
		printf("xiaogougege");
		exit(0);
	}
//	int ans=floor(r[0].b)-ceil(r[0].a)+1;
	int ans=0;
	for(int i=ceil(r[0].a);i<ceil(r[0].b);i++){
		ans++;
	}
	printf("%d",ans);
	return 0;
} 