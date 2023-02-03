// Created by FlyingPig278 on 2023/1/13.
#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,ans;
	int max=0;
	while(cin>>a){
		if(a.length()>max){
            max=a.length();
			ans=a;
		}
	}
	cout<<ans;
	return 0;
}