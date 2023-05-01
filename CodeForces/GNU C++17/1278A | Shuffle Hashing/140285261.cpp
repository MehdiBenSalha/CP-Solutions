#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x=0;
        string p,h;
        cin>>p>>h;
        if(h.length()<p.length()){cout<<"NO"<<endl;}
        else{
            string str;
            sort(p.begin(),p.end());
            int n =h.length()-p.length()+1;
            for (int i = 0; i < n; ++i) {
               str=h.substr(i,p.length());
               sort(str.begin(),str.end());
               if (str==p){
                   x++;
                   cout<<"YES"<<endl;
                   break;
               }
 
            }
            if (x==0){cout<<"NO"<<endl;}
        }
    }
 
    return 0;
}
 