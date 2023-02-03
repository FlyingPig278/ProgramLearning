#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=32;i<100;i++){
        int b=i*i;
        if(b/1000==b/100%10&&b/10%10==b%10) cout<<b<<endl;
    }
    return 0;
}