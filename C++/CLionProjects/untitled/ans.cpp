#include <bits/stdc++.h>
using namespace std;

int a[300005];

int main(){
    int n;
    cin>>n;
    for (int i = 0;i <n;i++){
        a[i]=i+1;
    }
    vector<int> b;
    for (int e:a){
        stringstream ss;
        ss<<e;
        int c=(int)ss.str().length();
        for (int j = 0;j <c;j++){
            b.push_back(ss.str().at(j)-'0');
        }
        ss.clear();
    }
    int temp=0;
    for (int e:b){
        temp=temp+e;
    }
    cout<<temp;
    return 0;
}