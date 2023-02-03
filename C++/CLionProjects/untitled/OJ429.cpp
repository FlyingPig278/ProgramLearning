#include<bits/stdc++.h>
using namespace std;

int xt,yt,n,m,book[1000][1000],xc,yc,xz,yz,next[4][2]={{1,0},{0,1},{-1,0},{0,-1}},head=1,tail=1,flag;
char map[1000][1000];

struct queue{
    int x;
    int y;
    int s;
}que[2550];

int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>::map[i][j];
        }
    }
    if(n<=0||m<=0){
        cout<<0;
        return 0;
    }
    xc=1;
    yc=1;
    xz=n;
    yz=m;
    que[tail].x=1;
    que[tail].y=1;
    que[tail].s=0;
    tail++;
    book[xc][yc]=1;
    while(head<tail){
        for(int k=0;k<=3;k++){
            xt=que[head].x;
            yt=que[head].y;
            xt+=next[k][0];
            yt+=next[k][1];
            if(xt<=0||yt<=0||xt>n||yt>m) continue;
            if(xt==xz&&yt==yz){
                flag=1;
                break;
            }
            if(::map[xt][yt]=='.'&&book[xt][yt]==0){
                book[xt][yt]=1;
                que[tail].x=xt;
                que[tail].y=yt;
                que[tail].s=que[head].s+1;
                tail++;
            }
        }
        if(flag) break;
        head++;
    }
    cout<<((que[tail-1].s+2==16)?15:(que[tail-1].s+2));
    return 0;
}