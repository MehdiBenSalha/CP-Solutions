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
bool isPower2(int n){
    double x= log2(n);
    if(x- floor(x)==0) return true;
    else return false;
}
int smallestPower(int n){
    int x=(int ) log2(n);
    return pow(2,x);
}
bool isInt(double n){
    if(ceil(n)== floor(n)) return true;
    else return false;
}
 
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
   // cin>>t;
    while (t--) {
       
       int n;
       cin>>n;
       int a=n/5;
       if(n%5!=0) a++;
       cout<<a;
    }}