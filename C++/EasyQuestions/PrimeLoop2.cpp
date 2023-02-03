//luoguP3916 NEED TO THINK
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lld long long

const int MAXN=21;

lld read() {
    lld ans = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f *= (ch == '-')? -1 : 1, ch = getchar();
    while (isdigit(ch)) ans = ((ans << 1) + (ans << 3) + (ch ^ 48)), ch = getchar();
    return ans * f;
}

bool isPrime(int n){
	if(n<2) return false; 
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
} 
int idx=1;
string ans[500000];
void print(deque<int> q){
    if(idx==11) exit(0);
//    stringstream ss;
//	ss<<idx++<<":";
    idx++;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop_front();
	}
	cout<<endl;
}

int n;
bool flag[MAXN];
int g[MAXN][MAXN];
deque<int> q;

void dfs(int x){
    if(q.size()==n&&!g[q.front()][q.back()]) return;
	if(q.size()==n){
		print(q);
		return;
	}
	for(int i=1;i<=n;i++){
		if((g[x][i]==1&&flag[i]==0)){
			q.pb(i);
			flag[i]=1;
			dfs(i);
			flag[i]=0;
			q.pop_back();
		}
	}
}

int main(){
	n=read();
    if(n>1&&n&1) return 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(isPrime(i+j)) g[i][j]=1; 
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<g[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	for(int i=1;i<=n;i++){
		q.pb(1);
		flag[1]=1;
		dfs(1);
//		flag[1]=0;
//		q.pop_back();
//	}
//    for(int i=1;i<min(idx,11);i++){
//        cout<<ans[i]<<endl;
//    }
//	cout<<"total:"<<idx-1;
	return 0;
}
