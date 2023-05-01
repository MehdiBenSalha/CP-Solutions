#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
cin>>t;
    while (t--){
ll m;
cin>>m;
if(m<10) cout<<m-1<<endl;
else{
 
ll p=1;
        for (int i = 0; i < 11; ++i) {
            p*=10;
            if (p>m) break;
        }
        cout<<m-(p/10)<<endl;
    }}
}
 
 
 
 
 
 
 
 
 