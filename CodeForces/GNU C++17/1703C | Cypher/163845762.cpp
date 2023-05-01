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
int n;
cin>>n;
int tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
        for (int i = 0; i < n; ++i) {
            int m;
            cin>>m;
            string s;
            cin>>s;
            for (int j = 0; j < m; ++j) {
                if(s[j]=='D') tab[i]++;
                else tab[i]--;
                if(tab[i]==10) tab[i]=0;
                if(tab[i]==-1) tab[i]=9;
            }
        }
        for (int i = 0; i < n; ++i) {
            cout<<tab[i]<<" ";
        }
        cout<<endl;
}
 
 
 
}
 
 
 
 
 
 
 