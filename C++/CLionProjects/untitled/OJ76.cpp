#include<bits/stdc++.h>
using namespace std;

signed main(){
    long long n,sum=1;
    cin>>n;
    while(n>sum){
        sum*=2;
    }
    if(sum-n>=n-sum/2) cout<<sum/2;
    else cout<<sum;
    return 0;
}