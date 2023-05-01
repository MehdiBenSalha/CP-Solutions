#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k;
x=n/k;
x=x*k;
x+=min(n%k,k/2);
cout<<x<<endl;
 
        }
    return 0;
}
 