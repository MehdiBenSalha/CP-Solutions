#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       string str,a,b;
       cin>>str;
       if (str.length()%2==1){
       cout<<"NO"<<endl;} else{
           a=str.substr(0,str.length()/2);
           b=str.substr(str.length()/2,str.length()/2);
           if (a==b){
               cout<<"YES"<<endl;
           } else{cout<<"NO"<<endl;}
 
 
       }
   }
 
 
    return 0;
}