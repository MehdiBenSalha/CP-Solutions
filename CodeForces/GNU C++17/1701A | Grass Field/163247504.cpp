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
     int tab[2][2];
     int n=0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cin>>tab[i][j];
                if(tab[i][j]==1) n++;
            }
        }
if(n==0) cout<<0<<endl;
else if(n==1) cout<<1<<endl;
else if(n==2 || n==3 ) cout<<1<<endl;
else cout<<2<<endl;
    }
}
 
 
 
 
 
 
 
 
 