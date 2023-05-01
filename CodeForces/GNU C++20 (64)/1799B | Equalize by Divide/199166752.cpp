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
vector< vector<int> > adj(10000);
vector<bool> visited(10000);
void initialize() {
    for(int i = 0;i < 10;++i)
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
 
 
bool equal(vector<int> v){
    for (int i = 1; i < v.size(); ++i) {
        if(v[i]!=v[i-1]) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
 
int n;
cin>>n;
vector<int> tab(n);
bool f= true;
for (int i = 0; i < n; ++i) {
    cin>>tab[i];
    if(tab[i]==1) f=false;
}
        if(equal(tab)) cout<<0<<endl;
        else
if(!f) cout<<-1<<endl;
 
else {
    vector<pair<int, int>> ans;
    while (!equal(tab) && f){
        set<int>s(tab.begin(),tab.end());
        vector<int>v(s.begin(),s.end());
        int mx=v[v.size()-1];
        int mx2=v[v.size()-2];
        if(v[0]==1) f=false;
        int ind=std::find(tab.begin(), tab.end(), mx) - tab.begin();
        int ind2=std::find(tab.begin(), tab.end(), mx2) - tab.begin();
        tab[ind]= ceil((double )tab[ind]/tab[ind2]);
        ans.push_back({ind+1,ind2+1});
 
 
 
    }
    if(!f) cout<<-1<<endl;
    else {
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); ++i) {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
 
 
 
    }
 
}
 
 
    }
 
}