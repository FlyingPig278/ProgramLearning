#include<bits/stdc++.h>
using namespace std;

inline int read(){
	int ans=0,f=1;
	char ch=getchar();
	while(!isdigit(ch)) f*=(ch=='-')?-1:1,ch=getchar();
	while(isdigit(ch)) ans=((ans<<1)+(ans<<3)+(ch^48)),ch=getchar();
	return ans*f;
}

const int MAXN=512,MAXCOL=(1<<10)+5;
//int p[MAXN][MAXN];
int n=read(),cnt=read(),m=read(),idx;
//priority_queue<int> ans;
struct anss{
	string val;
	int times;
}ans[MAXN];
//struct node{
//	int color[256];
//}p[MAXN][MAXN];
int p[MAXN][MAXN][512];

inline void add(string a){
	for(int i=1;i<=idx;i++){
		if(ans[i].val==a){
			ans[i].times++;
			return;
		}
	}
	ans[++idx].val=a,ans[idx].times++; 
}
//void test(){
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			for(int k=1;k<=(1<<cnt);k++){
//				cout<<p[i][j].color[k];	
//			}
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//}

inline void change(int i,int j,int col){
//	p[i][j].color[col]=(p[i][j].color[col]==0)?col:0;
	if(p[i][j][col]==0){
		p[i][j][col]=col;
	}
	else{
		p[i][j][col]=0;
	}
//	test();
}

inline void paint(int op,int col,int pos){
	if(op==1){
		for(int j=1;j<=pos;j++){
			for(int i=1;i<=n;i++){
//				p[i][j].color[col]=(p[i][j].color[col]==0)?col:0;
				change(i,j,col);
			}
//			test();
		}
	}
	else if(op==2){
		for(int j=pos;j<=n;j++){
			for(int i=1;i<=n;i++){
//				p[i][j].color[col]=(p[i][j].color[col]==0)?col:0;
				change(i,j,col);
			}
//			test();
		}
	}
	else if(op==3){
		for(int i=1;i<=pos;i++){
			for(int j=1;j<=n;j++){
//				p[i][j].color[col]=(p[i][j].color[col]==0)?col:0;
				change(i,j,col);
			}
//			test();
		}
	}
	else{
		for(int i=pos;i<=n;i++){
			for(int j=1;j<=n;j++){
//				p[i][j].color[col]=(p[i][j].color[col]==0)?col:0;
				change(i,j,col);
			}
//			test();
		}
	}
//	test();
}

int main(){
	for(int i=1;i<=m;i++){
		int op=read(),col=read(),pos=read();
		paint(op,col,pos);
	}
//	system("pause");
//	cout<<endl;
	stringstream ss;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=(1<<cnt);k++){
//				ss<<((p[i][j].color[k]==0)?"":p[i][j].color[k]);	
				if(p[i][j][k]!=0) ss<<p[i][j][k];
			}
			ss<<" ";
		}
		ss<<endl;
	}
//	cout<<ss.str()<<endl<<endl;
	string a;
	for(int i=1;i<=n*n;i++){
		if(ss>>a) add(a);
		else add(" ");
	}
	ss.clear();
	int finalans[MAXCOL];
	for(int i=1;i<=(1<<cnt);i++){
		finalans[i]=ans[i].times;
	}
	sort(finalans+1,(finalans+1+(1<<cnt)));
	for(int i=1;i<=(1<<cnt);i++){
		cout<<finalans[i]<<endl;
	}
//	while(ss>>a){
//		add(a);
//	}
////	priority_queue<int> pq;
//	for(int i=1;i<=(1<<cnt)+5;i++){
//		pq.push(ans[i].times);
//	}
//	while(pq.size()<(1<<cnt)){
//		pq.push(0);
//	}
//	for(int i=1;i<=pq.size();i++){
//		cout<<pq.top()<<endl;
//		pq.pop();
//	}
//	cout<<a;
//	int a,i=0;
//	int a;
//	while(ss>>a){
//		
//	}
//	for(int i=1;i<=(1<<cnt);i++){
//		cout<<ans[i]<<endl;
//	}
//	while(1) system("pause"); 
	return 0;
}
