#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int d= r/(b+1);
        string s="";
        for (int i = 0; i < d; ++i) {
            s+="R";
        }
        string x=s;
        x+="R";
        string ss="";
        for (int i = 0; i < b - r % (b + 1); ++i) {
            ss+=s;
            ss+="B";
        }
 
        for (int i = 0; i <r%(b+1) ; ++i) {
            ss+=x;
            ss+="B";
        }
        ss+=x;
        int j=ss.length();
 
        string sss=ss.substr(0,n);
        cout<<sss<<endl;
    }
    return 0;
 
 
}