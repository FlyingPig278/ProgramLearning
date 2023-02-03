#include<bits/stdc++.h>
using namespace std;

int book[10][10],b[10][10],flag=0,a[10];

void f(int s){
    if(s==6){
        flag=1;
        for(int i=1;i<=5;i++){
            cout<<(char)(a[i]+64)<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(b[i][j]==0&&book[i][j]==1){
                a[s]=i;
                b[i][j]=1;
                f(s+1);
                b[i][j]=0;
            }
        }
    }
    return;
}

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>book[i][j];
        }
    }
    f(1);
    if(!flag) cout<<"no";
    return 0;
}