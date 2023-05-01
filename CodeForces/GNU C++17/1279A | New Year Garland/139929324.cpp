#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int r,g,b;
       cin>>r>>g>>b;
 
       if (max({r,g,b})<=r+1+g+b-max({r,g,b})){
           cout<<"YES"<<endl;} else cout<<"NO"<<endl;
 
       }
 
 
    return 0;
}