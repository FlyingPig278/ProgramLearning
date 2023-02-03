#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j=0;j<=2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}