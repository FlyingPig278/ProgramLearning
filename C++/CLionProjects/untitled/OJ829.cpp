#include<bits/stdc++.h>
using namespace std;

int a[9][9],b[9],c[16],d[16],e[9],count=1;
string t[93];

void dfs(int s){
    if(s==9){
        stringstream ss;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                if(a[i][j]==1) ss<<j;
            }
        }
        t[::count++]=ss.str();
        return;
    }
    for(int j=1;j<=8;j++){
        if(!b[s]&&!c[s+j-1]&&!d[s-j+8]&&!e[j]){
            e[j]=1;
            b[s]=1;
            c[s+j-1]=1;
            d[s-j+8]=1;
            a[s][j]=1;
            dfs(s+1);
            b[s]=0;
            c[s+j-1]=0;
            d[s-j+8]=0;
            a[s][j]=0;
            e[j]=0;
        }
    }
    return;
}

int main(){
    dfs(1);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        cout<<t[temp]<<endl;
    }
    return 0;
}