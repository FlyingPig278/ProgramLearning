#include<bits/stdc++.h>
using namespace std;

char s[270];

int main(){
    cin.getline(s,270);
    int t=1;
    for(int i=1;i<=(int)strlen(s);i++){
        if(s[i]==s[i-1]) t++;
        else if(t!=1){
            cout<<t<<s[i-1];
            t=1;
        }
        else cout<<s[i-1];
    }
    return 0;
}