// Created by FlyingPig278 on 2022/12/18.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
    freopen("../out.txt","w",stdout);
    for(int i=1;i<=35;i++){ //i:男 j:女
        int j=35-i;
        for(int k=11;k<=35;k++){ //k:抗原 l:验孕棒
            int l=46-k;
            if(l>j) continue;
            for(int m=1;m<=min(j,l);m++){   //m:怀孕 n:阳性
                for(int n=1;n<=k;n++){
                    if(35-m<n) continue;
                    if(m+l+n+k==72){
                        cout<<"第"<<++c<<"组解："
                            <<"男生"<<i<<" "
                            <<"女生"<<j<<" "
                            <<"阳性"<<n<<" "
                            <<"阴性"<<35-n<<" "
                            <<"怀孕"<<m<<endl;
//                        printf("%d %d %d %d %d %d\n",i,j,k,l,n,m);
                    }
                }
            }
        }
    }
    return 0;
}
