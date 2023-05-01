#include"bits/stdc++.h"
#include<algorithm>
 
using namespace std;
#define ll long long
#define nl '\n'
typedef vector<int> vi;
typedef pair<int, int> pi;
#define itn int
#define  nit int
#define  nti int
#define  tin int
#define  tni int
#define  all(v) v.begin(), v.end()
#define  F first
#define  S second
#define  PB push_back
#define MP make_pair
 
 
 
 
bool isPrime(int n) {
 
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int sumDigit(ll n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 
bool isPower2(ll n) {
    double x = log2(n);
    if (x - floor(x) == 0) return true;
    else return false;
}
 
int smallestPower(int n) {
    int x = (int) log2(n);
    return pow(2, x);
}
 
bool isInt(double n) {
    if (ceil(n) == floor(n)) return true;
    else return false;
}
 
 
vector<int> removeDuplicates(int arr[], int n) {
 
    int i;
    set<int> s;
 
    for (i = 0; i < n; i++) {
 
        s.insert(arr[i]);
    }
    set<int>::iterator it;
 
    vector<int> v;
    for (it = s.begin(), i = 0; it != s.end(); ++it, i++)
        v.push_back(*it);
    return v;
}
 
 
int numberDiv(int n) {
    int i = 1;
    int r = 0;
    while (i * i < n) {
        if (n % i == 0) r += 2;
        i++;
 
    }
    if (i * i == n) r++;
    return r;
}
 
bool isPerfectSquare(int x) {
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
 
ll factorial(int n) {
    if (n == 0)
        return 1;
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
ll nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
 
ll NcR(int n, int r) {
 
    long long p = 1, k = 1;
 
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
 
    } else
        p = 1;
 
    return p;
}
 
void SieveOfEratosthenes(int n) {
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
 
int sieve(int n) {
    vector<bool> isPrime(n + 1, true);    // set all of them to primes
    isPrime[0] = isPrime[1] = 0;        // 0, 1 are not primes
 
    for (ll i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
 
    int cnt = 0;
 
    for (int i = 0; i < (int) isPrime.size(); ++i)
        if (isPrime[i])
            cnt++;
 
    return cnt;
}
 
 
bool compare(string &s1, string &s2) {
    return s1.size() < s2.size();
}
 
 
int bs(int tab[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (tab[mid] == x) { return mid; }
        if (tab[mid] < x) l = mid + 1;
        if (tab[mid] > x) r = mid - 1;
    }
    return -1;
}
 
 
int binaryToInt(string s) {
    int x = 0;
    int p = 1;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); ++i) {
        x += (s[i] - '0') * p;
        p *= 2;
    }
    return x;
}
 
 
/*while (l<=r){
int mid=(l+r)/2;
if(can(tab,n,mid)) {ans=mid; l=mid+1;}
else r=mid-1;
}
cout<<ans<<nl;*/
//ll f[1000001]={0};
//ll g[1000001]={0};
int di[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dj[] = {0, 0, 1, -1, 1, -1, -1, 1};
 
bool croissant(int tab[], int n) {
    for (int i = 1; i < n; ++i) {
        if (tab[i] < tab[i - 1]) return false;
    }
    return true;
}
 
bool decroissant(int tab[], int n) {
    for (int i = 1; i < n; ++i) {
        if (tab[i] > tab[i - 1]) return false;
    }
    return true;
}
 
 
std::string toBinary(int n) {
    std::string r;
    while (n != 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}
 
 
vector<int> divisors(int x) {
    vector<int> a;
    for (int l = 1; l * l <= x; ++l) {
        if (x % l == 0) {
            if (l * l != x)
                a.push_back(x / l);
            a.push_back(l);
        }
    }
    return a;
}
 
/*cout.precision(20);
        cout << fixed << mx/ 2.0 << endl;*/
 
 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
 
int pow(int a, int b) { // pow in log(b)
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int x = pow(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}
 
ll sumPow(ll a, int k) {
    if (k == 0) return 0;
    if (k % 2 == 1) return (a * sumPow(a, k - 1) + a);
    ll half = sumPow(a, k / 2);
    return half * (1 + half - sumPow(a, k / 2 - 1));
 
}
int compteur=0;
vector< vector<int> > adj(20000);
vector<bool> visited(20000);
void initialize() {
    for(int i = 0;i < 20000;++i)
        visited[i] = false;
}
void dfs(int node) {
    visited[node] = true;
    compteur++;
 
    for (int i = 0; i < adj[node].size(); ++i) {
 
        {
            int child = adj[node][i];
            if (!visited[child])    // To avoid cyclic behavior
            {
                dfs(child);
            }
 
            //topsort.push_back(node);    // DAG // Other way Indegree / Outdegree
        }
    }}
int ConnectedComponenetsCnt() {
    int cnt = 0;
    for (int i = 0; i < adj.size(); ++i) {
 
        {
            if (!visited[i])    // Then no one reach this isolated node yet and its neighbors.
            {  cnt++;
                dfs(i);
 
            }
        }
    }
    return cnt;
 
}
 
 
float power(float x, ll y, ll p){
    float res = 1;
    if(y<0){
        y=-y;
        x=1/x;
    }
    while (y > 0) {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
bool comp(pair<int,int> a,pair<int,int> b){
 
    return a.second<b.second;
}
ll power_no_mod(ll a, ll b) {
    ll result = 1;
    while (b) {
        if (b&1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
ll power_with_mod(ll a, ll b,ll m) {
    ll result = 1;
    while (b) {
        if (b&1) result =(result*a)%m;
        a = (a*a)%m;
        b /= 2;
    }
    return result;
}
 
map<ll,ll> cordinate_compression(vector<ll> a , ll start=0, ll pas = 1){
    set<ll> unique(a.begin(),a.end());
    map<ll,ll> mp;
    ll idx=0;
    for(auto x:unique){
        mp[x]=start+idx*pas;
        idx++;
    }
 
    return mp;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
int mob(ll n)
{
    int res = 0;
    if(n==1)
        return 1;
    if(n==2)
        return -1;
    if (n%2 == 0)
    {
        n = n/2;
        res++;
        if (n % 2 == 0)
            return 0;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        if (n%i == 0)
        {
            n = n/i;
            res++;
            if (n % i == 0)
                return 0;
        }
    }
 
    return (res % 2 == 0)? -1 : 1;
}
ll res(vector<ll>v) {
    ll ans = 0;
    for (int i = 0; i < v.size()-1; i++) {
        ans += (v[i]-v[i+1])*(v[i]-v[i+1]);
    }
    return ans;
}
 
bool verif(int a,int b){
    if (a>=0 && a<8 && b>=0 && b<8)
        return true;
    else return false;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
int n,m;
cin>>n>>m;
int tab[n];
int res=1;
int sum=0;
for(int i=0;i<n;i++){
    cin>>tab[i];
 
}
for(int i=0;i<n;i++){
    if(sum+tab[i]<=m){
        sum+=tab[i];
    }
    else{
        res++;
        sum=tab[i];
    }
}
cout<<res<<endl;
 
    }
 
 
}