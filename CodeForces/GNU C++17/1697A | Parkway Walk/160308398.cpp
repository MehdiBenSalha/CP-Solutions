#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--){
 
int n,m;
cin>>n>>m;
int a=0;
int s=0;
int tab[n];
int ind=0;
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
            s+=tab[i];
            if(s>m){a=s-tab[i];
            ind =i-1;}
        }
        if(s<=m){cout<<0<<endl;}
        else{
        int ss=0;
        for (int i = 0; i < ind; ++i) {
            ss+=tab[i];
        }
        m-=ss;
        s=s-ss-m;
        cout<<s<<endl;
 }}}
 
 
 
 