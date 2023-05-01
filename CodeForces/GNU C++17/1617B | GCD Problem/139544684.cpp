 
#include "bits/stdc++.h"
 
typedef long long ll;
 
using namespace std;
void solve(int x){
    long long n,a,b,c;
    cin>>n;
 
    x=0;
 
 
    for(ll i=2;i<n;++i){
 
 
 
            if (__gcd(i,n-i-1)==1    ){
                a=i;
                b=n-i-1;
                c=1;
                x=1;
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
 
            }
        }
 
    }
 
 
 
 
 
int main() {
 
    int t;
    int x = 0;
    cin >> t;
    for (int c = 0; c < t; ++c) {
        solve(x);
 
    }
}