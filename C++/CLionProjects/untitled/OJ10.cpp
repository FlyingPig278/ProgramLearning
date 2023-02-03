#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n,q,a,b,c;
	cin >> m >> n >> q;
    a=min(m,min(n,q));
    c=max(m,max(n,q));
    b=m+n+q-a-c;
    if(a+b<=c||a<=0||b<=0||c<=0){
        cout<<"no";
        return 0;
    }
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b==c) cout<<"zhijiao";
    else if(a+b>c) cout<<"ruijiao";
    else if(a+b<c) cout<<"dunjiao";
	return 0;
}