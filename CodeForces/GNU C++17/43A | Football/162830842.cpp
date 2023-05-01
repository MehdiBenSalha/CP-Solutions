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
 
        string tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
        string first=tab[0];
        int a=1, b=0;
        string second;
        for (int i = 1; i < n; ++i) {
            if(tab[i]==first) a++;
            else {  second=tab[i]; b++;}
        }
        cout << ( a>b ? first : second );
 
 
        }
    }
 
 
 
 
 
 
 
 
 