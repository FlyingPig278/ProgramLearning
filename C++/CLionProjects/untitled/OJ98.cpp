#include<bits/stdc++.h>
using namespace std;

char s[25];
int a,b,c;

int main(){
    cin.getline(s,25);
    for(int i=0;i<(int)strlen(s)-1;i++){
        if(s[i]>='0'&&s[i]<='9') c++;
        else if(s[i]>='A'&&s[i]<='Z') a++;
        else b++;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}