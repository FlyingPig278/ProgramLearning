#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
// Created by FlyingPig278 on 2022/12/15.
#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    int l,r;
}bt[20000001];

int idx=1;

int add(int val,int n){
    if(n==0){
        bt[++idx].val=val;
        return idx;
    }
    else if(val<bt[n].val){
        bt[n].l=add(val,bt[n].l);
    }
    else if(val>bt[n].val){
        bt[n].r=add(val,bt[n].r);
    }
    return n;
}

void build(){
    int val;
    cin>>val;
    bt[1].val=val;
    while(cin>>val){
        add(val,1);
    }
}

void copy(node &a,node &b){
    b=a;
}

int findFather(int val,int n){
    if(n==0) return -1;
    if(bt[bt[n].l].val==val||bt[bt[n].r].val==val) return n;
    else if(val<bt[n].val) return findFather(val,bt[n].l);
    else return findFather(val,bt[n].r);
}

int find(int val,int n){
    if(n==0) return -1;
    if(bt[n].val==val) return n;
    else if(val<bt[n].val) return find(val,bt[n].l);
    else return find(val,bt[n].r);
}

void delnum(int n){
    bt[n].l=0;
    bt[n].r=0;
    bt[n].val=0;
}

void del(int val){
    int n,f;
    if(val!=bt[1].val){
        f=findFather(val,1);
        if(f==-1){
            return;
        }
        if(bt[bt[f].l].val==val){
            n=bt[f].l;
        }
        if(bt[bt[f].r].val==val){
            n=bt[f].r;
        }
    }
    else{
        n=find(val,1);
    }
    if(bt[n].l==0&&bt[n].r==0){
        if(bt[bt[f].l].val==val) bt[f].l=0;
        else if(bt[bt[f].r].val==val) bt[f].r=0;
        delnum(n);
    }
    else if(bt[n].l==0&&bt[n].r!=0){
        int r=bt[n].r;
        copy(bt[bt[n].r],bt[n]);
        delnum(r);
    }
    else if(bt[n].l!=0&&bt[n].r==0){
        int l=bt[n].l;
        copy(bt[bt[n].l],bt[n]);
        delnum(l);
    }
    else if(bt[n].l!=0&&bt[n].r!=0){
        bt[n].val=bt[bt[n].l].val;
        int index=bt[n].l;
        while(bt[index].r!=0){
            index=bt[index].r;
        }
        bt[index].r=bt[n].r;
        bt[n].r=bt[bt[n].l].r;
        bt[n].l=bt[bt[n].l].l;
    }
}

void print(int n){
    if(bt[n].l!=0){
        print(bt[n].l);
    }
    cout<<bt[n].val<<" ";
    if(bt[n].r!=0){
        print(bt[n].r);
    }
}

int main(){
    freopen("BST.in","w",stdout);
    cout<<"7 4 1 5 16 8 11 12 15 9 2";
    fclose(stdout);
    freopen("BST.in","r",stdin);
    build();
    int val[11]={7,4,1,5,16,8,11,12,15,9,2};
    sort(val,val+11);
    freopen("BST.out","w",stdout);
    print(1);
    for(int i=0;i<11;i++){
        cout<<endl;
        del(val[i]);
        print(1);
    }
    return 0;
}
//7 4 1 5 16 8 11 12 15 9 2
#pragma clang diagnostic pop
