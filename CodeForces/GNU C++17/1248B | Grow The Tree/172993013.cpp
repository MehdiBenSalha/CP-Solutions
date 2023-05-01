#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
#define nl '\n'
typedef vector<int> vi;
typedef pair<int,int> pi;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
 
 
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
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
 
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 
int sieve(int n)
{
    vector<bool> isPrime(n+1, true); // set all of them to primes
    isPrime[0] = isPrime[1] = 0;  // 0, 1 are not primes
 
    for (ll i = 2; i*i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
 
    int cnt = 0;
 
    for (int i = 0; i < (int)isPrime.size(); ++i)
        if(isPrime[i])
            cnt++;
 
    return cnt;
}
 
bool isis(int n){
    string ss = to_string(n);
    set<char> s;
    for (int i = 0; i < ss.length(); ++i) {
        s.insert(ss[i]);
    }
    if(s.size()==ss.length()) return true;
    else return false;
}
 
bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
//ll f[100001]={0};
 
 
 
int main() {
 
 
 
    int t = 1;
   //   cin>>t;
    while (t--) {
ll n;
 
cin>>n;
ll tab[n];
ll sum=0;
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
            sum+=(ll) tab[i];
        }
        sort(tab,tab+n);
        ll res=n/2;
        ll msum=0;
        for (int i = 0; i < res; ++i) {
            msum+=tab[i];
        }
sum=sum-msum;
        cout<<(sum*sum)+(msum*msum);
 }}