#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) {
 
int n;
cin>>n;
int tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
        sort(tab,tab+n);
bool a=false;
if(n<3) cout<<-1<<endl;
else {
        for (int i = 0; i <n-2; ++i) {
 
            if(tab[i]==tab[i+2]) {cout<<tab[i]<<endl; a= true ; break;}
 
        }
if(!a) cout<<-1<<endl;}
    }
    return 0;
}
 
 
 
 
 