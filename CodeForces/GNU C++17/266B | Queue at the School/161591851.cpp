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
       int k;
       cin>>n;
       cin>>k;
 
       string s;
       cin>>s;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n-1; ++j) {
                if(s[j]=='B' && s[j+1]=='G'){
                    s[j]='G';
                    s[j+1]='B';
                    j++;
                }
                if(j==n-1) break;
            }
        }
       cout<<s;
        }
    }
 
 
 
 
 
 
 
 
 