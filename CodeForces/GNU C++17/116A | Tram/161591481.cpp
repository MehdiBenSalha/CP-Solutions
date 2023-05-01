#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t=1;
 
    while (t--){
       int n;
       cin>>n;
       int s=0;
       int a,b;
       int m=0;
        for (int i = 0; i <n; ++i) {
            cin>>a>>b;
            s-=a;
            s+=b;
            m=max(m,s);
        }
        cout<<m;
        }
    }
 
 
 
 
 
 
 
 
 