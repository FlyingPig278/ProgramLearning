// Created by FlyingPig278 on 2022/12/17.
#include<bits/stdc++.h>
using namespace std;

int heap[1000001],n;

void add(int num,int idx){
    heap[idx]=num;
    while(idx/2>0&&heap[idx/2]>num){
        swap(heap[idx/2],heap[idx]);
        idx/=2;
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        add(num,i);
    }
    for(int i=1;i<=n;i++){
        cout<<heap[i]<<" ";
    }
    return 0;
}
