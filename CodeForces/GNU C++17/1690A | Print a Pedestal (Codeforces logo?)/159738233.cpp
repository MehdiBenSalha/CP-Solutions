#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--){
    int n;
    cin>>n;
    if(n%3==0) cout<<n/3<<" "<<n/3 +1<<" "<<n/3 -1<<endl;
    if(n%3==1) cout<<n/3<<" "<<n/3 +2<<" "<<n/3 -1<<endl;
    if(n%3==2) cout<<n/3 +1<<" "<<n/3 +2<<" "<<n/3 -1<<endl;
    }
 
}