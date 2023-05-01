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
bool isLucky(string s){
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]!='4' && s[i]!='7' ) return false;
    }
    return true;
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
    //cin>>t;
    while (t--) {
     int n,x;
     cin>>n>>x;
     int tab[n];
     int sum=0;
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
            sum+=tab[i];
        }
        double rest=(double)abs(sum);
        int c= ceil(rest/x);
        cout<<c;
    }
 
}
 
 