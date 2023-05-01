#include <iostream>
#include "bits/stdc++.h"
using namespace std;
string solve (int n){
    char c='2';
    string str(n,c);
 
    if (n==1){str="-1";
        return str;} else{
        str[n-1]='3';
        if((2*(n-1))%3==0){
            str[0]='3';
        }
        return (str);
 
    }
}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       cout<<solve(n)<<endl;
 
   }
 
 
 
    return 0;
}