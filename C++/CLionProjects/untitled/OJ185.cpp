#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    b=a*a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(b-a+j*2-1<=9&&j==1) cout<<"  "<<b-a+j*2-1;
            else if(b-a+j*2-1<=9) cout<<"  "<<b-a+j*2-1;
            else if(j==1) cout<<" "<<b-a+j*2-1;
            else cout<<" "<<b-a+j*2-1;
            b--;
        }
        cout<<endl;
    }
    return 0;
}