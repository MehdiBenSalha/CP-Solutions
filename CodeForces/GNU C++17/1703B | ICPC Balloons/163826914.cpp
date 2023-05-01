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
string s;
cin>>s;
sort(s.begin(),s.end());
s.erase(unique(s.begin(),s.end()),s.end());
cout<<n+s.length()<<endl;
 
 
 
}
 
 
 
}
 
 
 
 
 
 
 