// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=100,ans=0;
    for (int i = 1; i <=a ; ++i) {
        for (int j = 1; j <=(a-i)/2 ; ++j) {
            for (int k = 1; k <=(a-i-j*2)/5 ; ++k) {
                if(i+2*j+5*k==a) ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
