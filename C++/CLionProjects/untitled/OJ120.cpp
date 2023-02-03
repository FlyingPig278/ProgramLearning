#include<bits/stdc++.h>
using namespace std;

int main(){
    char c[260];
    int a=0;
    while(cin>>c[a]){
        a++;
    }
    for(int i=a-1;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}