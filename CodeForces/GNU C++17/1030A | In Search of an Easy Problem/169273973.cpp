#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
 
 
bool isPrime(int n){
 
    for (int i = 2; i*i<=n ; ++i) {
        if(n%i==0) return false;
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
 
bool isGood(string s,int k){
    for (int i = 0; i <= k; ++i) {
        string d= to_string(i);
 
        if(s.find(d)==string::npos) return false;
    }
 
    return true;
}
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
 
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--) {
     int n;
 
     cin>>n;
     int c=0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            if(x==0) c++;
        }
        if(c==n) cout<<"EASY";
        else cout<<"HARD";
 
     }
    }
 
 
 
 
 