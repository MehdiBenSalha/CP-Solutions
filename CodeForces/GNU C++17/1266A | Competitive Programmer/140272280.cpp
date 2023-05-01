#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
string str;
int x=0;
cin>>str;
        sort(str.begin(),str.end());
        if(str=="0"){cout<<"red";}else{
        if(str[0]=='0' && str[1]=='0'){x=1;}
        if (str.find("0") == string::npos){cout<<"cyan"<<endl;}
        else{
            int y=0;
            for (int i = 0; i < str.length(); ++i) {
                y+=(int)str[i];
                if((int )str[i]%2==0 && str[i]!='0'){x=1;}
            }
            y=y-str.length()*48;
            if (y%3==0 && x==1){
                cout<<"red"<<endl;
            } else{cout<<"cyan"<<endl;}
 
        }
 
 
    }}
    return 0;
}
 