#include<bits/stdc++.h>
using namespace std;

char s[1000];
int c;

int main(){
    cin.getline(s,1000);
    for (int i = 0; i <(int) strlen(s); i++) {
        if(s[i]==' ') c++;
    }
    for(int j=0;j<c;j++){
        cout<<' ';
    }
    for(int i=0;i<(int) strlen(s);i++){
        if(s[i]!=' ') cout<<s[i];
    }
    return 0;
}