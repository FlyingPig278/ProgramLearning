// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans=0;
    cin>>n;
    n*=10;
    for (int i = 1; i <=n/8 ; ++i) {
        for (int j = 1; j <=(n-8*i)/2 ; ++j) {
            for (int k = 1; k <=(n-8*i-2*j) ; ++k) {
                if(8*i+2*j+k==n&&i+j+k>30) {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
