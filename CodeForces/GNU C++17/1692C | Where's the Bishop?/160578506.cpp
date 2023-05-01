#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
    while (t--){
        string s;
        string tab[8];
        for (int i = 0; i < 8; ++i) {
            cin>>tab[i];}
        for (int i = 0; i < 8; ++i) {
            int found = tab[i].find("#.#");
            if (found != string::npos) {
                cout<<i+2<<" "<<found+2<<endl;
                break;
        }
 
            }
 
 
 
            }
    }
 
 
 
 