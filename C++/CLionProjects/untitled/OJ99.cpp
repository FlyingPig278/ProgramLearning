#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag=0,a;
    cin>>a;
    stringstream c;
    c<<a;
    string b=c.str();
    int len=(int)b.size();
    for(int i=0;i<len;i++){
        if(b[i]==b[len-i-1]){
            flag++;
        }
    }
    if(flag==len) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}
