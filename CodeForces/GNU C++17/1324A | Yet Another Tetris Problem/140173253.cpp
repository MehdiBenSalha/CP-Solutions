#include <iostream>
#include "bits/stdc++.h"
using namespace std;
 
 
int main() {
   int t;
   cin>>t;
   while(t--){
       int n,a=0,b=0;
       cin>>n;
       int tab[n];
       for (int i = 0; i < n; ++i) {
           cin>>tab[i];
           if (tab[i]%2==0){a++;}
           else
           {b++;}
       }
       if (a==0||b==0){
           cout<<"YES"<<endl;
       } else
       {cout<<"NO"<<endl;}
 
   }
 
 
 
    return 0;
}