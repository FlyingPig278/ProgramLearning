// Created by FlyingPig278 on 2022/12/17.
#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> > a;
int n;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        a.push(num);
    }
    int ans=0;
    while(a.size()>1){
        int t=a.top();
        a.pop();
        a.push(t+a.top());
        ans+=t+a.top();
        a.pop();
    }
    cout<<ans;
    return 0;
}