#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int t;
//cin>>t;
  //  while (t--) {
ll n,m,a;
cin>>n>>m>>a;
 
ll x= floor(n/a)+1;
ll y= floor(m/a)+1;
if(n%a==0){x=n/a;}
if(m%a==0){y=m/a;}
 
cout<<x*y;
 
    //}
    return 0;
}