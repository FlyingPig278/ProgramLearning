// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <=100 ; ++i) {
        for (int j = 1; j <=100-i ; ++j) {
            if(100-i-j<1||(5*i+3*j+(100-i-j)/3!=100)||(100-i-j)%3!=0) continue;
            cout<<i<<" "<<j<<" "<<100-i-j<<endl;
        }
    }
    return 0;
}
