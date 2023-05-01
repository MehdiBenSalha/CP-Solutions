#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin>>s;
        bool f= true;
        if(s.length()==1) {cout<<"NO"<<endl; f= false;}
        else {if((s[0]!=s[1]) ||(s[s.length()-1]!=s[s.length()-2])) {cout<<"NO"<<endl; f= false;}
        else  { for (int i = 1; i < s.length()-1; ++i) {
                    if((s[i-1]!=s[i] ) && (s[i]!=s[i+1])) {cout<<"NO"<<endl; f= false; break;}
                }}}
 
if(f) cout<<"YES"<<endl;
    }
    return 0;
}
 