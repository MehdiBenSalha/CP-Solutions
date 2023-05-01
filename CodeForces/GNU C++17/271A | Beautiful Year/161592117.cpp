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
       n++;
        while (true){
            set<char> s;
            string  ss= to_string(n);
            for (int i = 0; i < 4; ++i) {
                s.insert(ss[i]);
            }
            if(s.size()==4) break;
            else n++;
        }
        cout<<n;
        }
    }
 
 
 
 
 
 
 
 
 