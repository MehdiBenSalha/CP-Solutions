#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   int t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n>>m;
 
           vector<int> v;
           for (int i = 0; i < n; ++i) {
               int x;
               cin>>x;
               v.push_back(x);
           }
           sort(v.begin(),v.end());
           reverse(v.begin(),v.end());
 
ll chairs=0;
           for (int i =0; i < n; ++i) {
              chairs+=1;
              chairs+=v[i];
           }
 
           chairs+=v[0]-v[n-1];
 
 
          if(chairs>m) cout<<"NO"<<endl; else cout<<"YES"<<endl;
 
   }
 
 
}
 