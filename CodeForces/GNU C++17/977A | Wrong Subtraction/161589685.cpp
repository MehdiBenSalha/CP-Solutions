#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t=1;
 
    while (t--){
       int n,k;
       cin>>n>>k;
        for (int i = 0; i < k; ++i) {
            if (n%10==0) n=n/10;
            else n--;
        }
cout<<n;
        }
    }
 
 
 
 
 
 
 
 
 