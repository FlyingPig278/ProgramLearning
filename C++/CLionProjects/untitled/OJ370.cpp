#include<bits/stdc++.h>
using namespace std;

char num[1050];
char a[1050];
int flag=0,flag2=0;

int main(){
    cin.getline(num,1050);
    int s;
    cin>>s;
    int i=0,j=0;
    while(j<=(int)strlen(num)){
        flag2=0;
        if(s==0) flag=1;
        if(i==0&&!flag) {
            a[0]=num[j];
        }
        else{
            while(num[j]<a[i-1]&&!flag&&s>0){
                a[--i]=num[j];
                s--;
                flag2=1;
            }
            if(!flag2){
                a[i]=num[j];
            }
        }
        i++;
        j++;
    }
    int k=0;
    while(a[k]=='0') k++;
    for(int b=k; b <(int)strlen(a); b++){
        cout<<a[b];
    }
    return 0;
}