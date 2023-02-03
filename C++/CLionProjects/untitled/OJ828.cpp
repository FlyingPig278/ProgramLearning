#include<bits/stdc++.h>
using namespace std;

int a[9][9],b[9],c[16],d[16],e[9],count=1;

void dfs(int s){
    if(s==9){
        cout<<"No. "<<::count++<<endl;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
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
    return 0;
}