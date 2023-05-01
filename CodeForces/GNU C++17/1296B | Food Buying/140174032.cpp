#include <iostream>
#include "bits/stdc++.h"
using namespace std;
 
 
int main() {
   int t;
   cin>>t;
   while(t--){
       long long x=0;
       long long n,a=0;
       cin>>n;
       while (n>9){
           a= floor(n/10);
           x+=10*a;
           n=n-9*a;
       }
       x+=n;
       cout<<x<<endl;
 
 
 
   }
 
 
 
    return 0;
}