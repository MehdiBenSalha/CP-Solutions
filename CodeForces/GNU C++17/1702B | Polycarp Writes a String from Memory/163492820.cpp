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
        string s;
        cin>>s;
        set<char> m;
        int d=0;
        for (int i = 0; i < s.length(); ++i) {
            m.insert(s[i]);
            if(m.size()>3){d++; m.clear(); m.insert(s[i]);}
        }
        if(m.size()!=0) d++;
        cout<<d<<endl;
    }
}
 
 
 
 
 
 
 
 
 