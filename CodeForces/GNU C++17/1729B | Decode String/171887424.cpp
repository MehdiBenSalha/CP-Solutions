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
bool isPower2(ll n){
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
 
void fillPrefixSum(ll arr[], int n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void fillPrefixSum(vector<ll> v,  ll prefixSum[])
{
    prefixSum[0] = v[0];
    // Adding present element with previous element
    for (int i = 1; i < v.size(); i++)
        prefixSum[i] = prefixSum[i - 1] + v[i];
}
 
vector<int> removeDuplicates(int arr[], int n)
{
 
    int i;
 
    // Initialise a set
    // to store the array values
    set<int> s;
 
    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
 
        // insert into set
        s.insert(arr[i]);
    }
 
    set<int>::iterator it;
 
    // Print the array with duplicates removed
    vector<int> v;
    for (it = s.begin() , i=0; it != s.end(); ++it , i++)
        v.push_back(*it);
    return v;
}
 
 
int numberDiv(int n){
    int i=1;
    int r=0;
    while(i*i<n){
        if(n%i==0) r+=2;
        i++;
 
    }
    if(i*i==n) r++;
    return r;
}
 
bool isPerfectSquare(int x)
{
 
    if (x >= 0) {
 
        long long sr = sqrt(x);
 
 
        return (sr * sr == x);
    }
    return false;
}
ll factorial(int n) {
    if(n == 0)
        return 1;
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
ll nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
ll NcR(int n, int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    return p;
}
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
//ll f[100001]={0};
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 int t;
 cin>>t;
 while(t--){
int n;
cin>>n;
string s;
cin>>s;
string res="";
     std::reverse(s.begin(), s.end());
     int i=0;
     while(i<=n-2) {
         if(s[i]=='0') {string ss="";
         ss+=s[i+2];
         ss+=s[i+1];
         int x=stoi(ss);
         res+=(char)x+96;
i+=2;
         }
         else{string ss="";
             ss+=s[i];
             int x=stoi(ss);
             res+=(char)x+96;
         }
         i++;
 
     }
     if(i==n-1){
     string ss="";
     ss+=s[i];
     int x=stoi(ss);
     res+=(char)x+96;}
 
 
     else if(i==n-2){
         string ss;
         int x;
     ss="";
     ss+=s[i];
     x=stoi(ss);
     res+=(char)x+96;
         ss="";
         ss+=s[i+1];
         x=stoi(ss);
         res+=(char)x+96;
     }
     std::reverse(res.begin(), res.end());
     cout<<res<<endl;
 }
 
 
}