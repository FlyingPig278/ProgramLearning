// Created by FlyingPig278 on 2022/12/18.
#include<bits/stdc++.h>
using namespace std;
const int n=5000;
int main(){
    freopen("../test2out.cpp","w",stdout);
    cout<<"#include<bits/stdc++.h>\n"
          "using namespace std;\n"
          "\n"
          "int main(){\n"
          "    int m,n;\n"
          "    cin>>m>>n;\n"
          "    switch(m){\n";
    for(int i=0;i<n;i++){
        cout<<"        case "<<i<<":{\n"
                                  "            switch(n){\n";
        for(int j=0;j<n;j++){
            cout<<"                case "<<j<<":{\n"
                                      "                    cout<<"<<i+j<<";\n"
                                      "                    break;\n                }\n";
        }
        cout<<"            }\n            break;\n        }\n";
    }
    cout<<"    }\n"
          "    return 0;\n"
          "}";
    return 0;
}
