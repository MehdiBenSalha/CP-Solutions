#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
int tab[t+1];
int tab2[t+1];
    for (int i = 1; i <= t; ++i) {
        cin>>tab[i];
        tab2[tab[i]]=i;
    }
    for (int i = 1; i < t+1; ++i) {
        cout<<tab2[i]<<" ";
    }
}
 
 
 