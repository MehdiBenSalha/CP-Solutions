#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if (n<15){cout<<"NO"<<endl;}else{
        if (n%14<7 && n%14>0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
 
    }}
    return 0;
}