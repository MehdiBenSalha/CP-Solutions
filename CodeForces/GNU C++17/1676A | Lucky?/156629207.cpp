#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--){
    string s;
    cin>>s;
    int somme=0;
    int somm=0;
        for (int i = 0; i < 3; ++i) {
            somme+=int(s[i]);
        }
        for (int i = 3; i <6 ; ++i) {
            somm+=int(s[i]);
        }if(somme==somm) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}