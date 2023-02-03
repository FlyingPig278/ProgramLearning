#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b=1;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(b<=9&&j==1) cout<<"  "<<b;
            else if(b<=9) cout<<"  "<<b;
            else if(j==1) cout<<" "<<b;
            else cout<<" "<<b;
            b++;
        }
        cout<<endl;
    }
    return 0;
}