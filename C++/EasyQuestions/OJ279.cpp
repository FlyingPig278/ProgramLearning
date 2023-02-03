#include "bits/stdc++.h"
using namespace std;

int main(){
    int a[1005];
    memset(a,0,sizeof(a));
    a[1]=1;
    int l=1,s,n;
    cin>>n;
    n+=1;
    for(int k=1;k<=n;k++){
        for(int i=1;i<=l;i++){
            a[i]*=2;
        }
        for(int i=1;i<=l;i++){
            s=0;
            if(a[i]>9){
                a[i+1]+=a[i]/10;
                a[i]%=10;
                l=max(l,i+1);
            }
        }
        l=max(s,l);
    }
    if(a[1]>=2){
        a[1]-=2;
    }
    else{
        a[1]=8+a[1];
        a[2]--;
    }
    for(int i=l;i>=1;i--){
        cout<<a[i];
    }
    return 0;
}