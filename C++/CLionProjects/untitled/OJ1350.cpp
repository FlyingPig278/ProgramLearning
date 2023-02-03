#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,ms,ns,flag=1;
    cin>>m>>n;
    char com[105],map[25][25];
    cin>>com;
    for(int i=1;i<=m;i++){
        for (int j = 1; j <=n; j++) {
            cin>>map[i][j];
            if(map[i][j]=='S'){
                ms=i;
                ns=j;
            }
        }
    }
    for(int i=0;i<(int)strlen(com);i++){
        switch (com[i]) {
            case 'F':{
                switch (flag) {
                    case 1:{
                        if(ms-1>0&&map[ms-1][ns]=='.'){
                            map[ms][ns]='.';
                            map[--ms][ns]='S';
                        }
                        break;
                    }
                    case 2:{
                        if(ms+1<=m&&map[ms+1][ns]=='.'){
                            map[ms][ns]='.';
                            map[++ms][ns]='S';
                        }
                        break;
                    }
                    case 3:{
                        if(ns-1>0&&map[ms][ns-1]=='.'){
                            map[ms][ns]='.';
                            map[ms][--ns]='S';
                        }
                        break;
                    }
                    case 4:{
                        if(ns+1<=n&&map[ms][ns+1]=='.'){
                            map[ms][ns]='.';
                            map[ms][++ns]='S';
                        }
                        break;
                    }
                }
                break;
            }
            case 'B':{
                switch (flag) {
                    case 2: {
                        if (ms - 1 > 0 && map[ms - 1][ns] =='.') {
                            map[ms][ns] = '.';
                            map[--ms][ns] = 'S';
                        }
                        break;
                    }
                    case 1: {
                        if (ms + 1 <= m && map[ms + 1][ns] =='.') {
                            map[ms][ns] = '.';
                            map[++ms][ns] = 'S';
                        }
                        break;
                    }
                    case 4: {
                        if (ns - 1 > 0 && map[ms][ns - 1] =='.') {
                            map[ms][ns] = '.';
                            map[ms][--ns] = 'S';
                        }
                        break;
                    }
                    case 3: {
                        if (ns + 1 <= n && map[ms][ns + 1] =='.') {
                            map[ms][ns] = '.';
                            map[ms][++ns] = 'S';
                        }
                        break;
                    }
                }
                break;
            }
            case 'L':{
                switch (flag) {
                    case 1:{
                        flag=3;
                        break;
                    }
                    case 2:{
                        flag=4;
                        break;
                    }
                    case 3:{
                        flag=2;
                        break;
                    }
                    case 4:{
                        flag=1;
                        break;
                    }
                }
                break;
            }
            case 'R':{
                switch (flag) {
                    case 2:{
                        flag=3;
                        break;
                    }
                    case 1:{
                        flag=4;
                        break;
                    }
                    case 4:{
                        flag=2;
                        break;
                    }
                    case 3:{
                        flag=1;
                        break;
                    }
                }
                break;
            }
        }
    }
    switch (flag) {
        case 1:{
            cout<<ms<<" "<<ns<<" "<<"n";
            break;
        }
        case 2:{
            cout<<ms<<" "<<ns<<" "<<"s";
            break;
        }
        case 3:{
            cout<<ms<<" "<<ns<<" "<<"w";
            break;
        }
        case 4:{
            cout<<ms<<" "<<ns<<" "<<"e";
            break;
        }
    }
    return 0;
}