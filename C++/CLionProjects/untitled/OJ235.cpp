#include<bits/stdc++.h>
using namespace std;

int getTime1(int a,int num[]){
    sort(num,num+a-1);
    int sum=0;
    for(int i=1;i<a;i++){
        sum+=num[i];
        if(i!=a-1) sum+=num[0];
    }
    return sum;
}
int getTime2(int a,int num[]){
    if(a>4) return getTime2(a-2,num)+2*num[1]+num[0]+num[a-1];
    else if(a==4) return getTime2(a-2,num)+num[a-1]+num[a-2];
    else if(a==3) return num[0]+num[1]+num[2];
    else if(a==2) return num[1];
    else return num[0];
}

int main(){
    int nums[1050],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int time1= getTime1(n,nums);
    int time2= getTime2(n,nums);
//    cout<<time1<<endl;
//    cout<<time2<<endl;
    if(time1!=0&&time2!=0) cout<<min(time1,time2);
    else cout<<max(time1,time2);
    return 0;
}