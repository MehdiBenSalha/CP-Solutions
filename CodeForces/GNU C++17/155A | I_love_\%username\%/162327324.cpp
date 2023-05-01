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
 
        int tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
        int max=tab[0],min=tab[0];
        int c=0;
        for (int i = 1; i < n; ++i) {
            if(tab[i]<min){c++; min=tab[i]; continue;}
            if(tab[i]>max){c++;max=tab[i];}
        }
        cout<<c;
        }
    }
 
 
 
 
 
 
 
 
 