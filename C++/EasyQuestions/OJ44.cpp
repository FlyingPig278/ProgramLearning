// Created by FlyingPig278 on 2023/1/12.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string eng[10]={"out","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    if (!(n <= 9 && n >= 1)) n = 0;
    cout<<eng[n];
    return 0;
}
