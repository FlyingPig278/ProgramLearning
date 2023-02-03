#include<bits/stdc++.h>
using namespace std;

//stringstream那一段在c++11后可用to_string(a)替代;

bool isAns(int a){
    int flag=0;
    stringstream c;
    c<<a;
    string b=c.str();
    int len=(int)b.size();
    for(int i=0;i<len;i++){
        if(b[i]==b[len-i-1]){
            flag++;
        }
    }
    if(flag==len) return true;
    return false;
}

int main(){
    int n,flag=0,temp;
    cin>>n;
    while(!isAns(n)){
        stringstream a;
        a<<n;
        int len=(int)a.str().size();
        for(int i=1;i<=len;i++){
            if(i==1) temp=n;
            n+=temp%10*pow(10,len-i);
            temp=temp/10;
        }
        flag++;
    }
    cout<<flag;
    return 0;
}