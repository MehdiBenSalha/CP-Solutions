#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
bool isPrime(int n){
    int r=0;
    for (int i = 2; i<= sqrt(n) ; ++i) {
        if(n%i==0) r++;
    }
    if(r==0) return true;
    else return false;
}
 
int sumDigit(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
   // cin>>t;
    while (t--) {
 
        double n,tt,d,k;
        cin >>n>>tt>>k>>d;
 
        double res= ceil(n/k) ;
        int t1=0;
        int i1=0;
        int i2=d;
        for (int i = 0; i < res; ++i) {
if(i1<i2) i1+=tt;
else i2+=tt;
        }
        t1=max(i1,i2);
        int t2=res*tt;
        if(t2<=t1) cout<<"NO";
        else cout<<"YES";
 
    }
 
}
 
 
 
 
 
 
 