// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<10) {
        cout << "A";
        return 0;
    }
    if(n<20){
        cout<<"B";
        return 0;
    }
    if(n<40){
        cout<<"C";
        return 0;
    }
    if(n<50){
        cout<<"D";
        return 0;
    }
    if(n<80){
        cout<<"E";
        return 0;
    }
    return 0;
}
