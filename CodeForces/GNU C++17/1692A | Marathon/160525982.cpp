#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int p=0;
        if(b>=a) p++; if(c>=a) p++; if(d>=a) p++;
        cout<<p<<endl;
    }
}
 
 
 