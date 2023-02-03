#include<bits/stdc++.h>
using namespace std;

string a,b,s;

int main(){
    getline(cin,s);
    getline(cin,a);
    getline(cin,b);
    int c=0;
    while (c>=0){
        c=(int)s.find(a,c);
        if(c<0) break;
        s.replace(c,a.size(),b);
        c+=(int)b.size()-1;
    }
    cout<<s;
    return 0;
}