#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,t=0;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    if(c>f) t+=c-f;
    else{
        t+=(60+c-f);
        b--;
    }
    if(b>e) t+=(b-e)*60;
    else{
        t+=(60+b-e)*60;
        a--;
    }
    t+=(a-d)*3600;
    cout<<t;
    return 0;
}