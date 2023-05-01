#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std;
#define ll long long
#define nl '\n'
typedef vector<int> vi;
typedef pair<int, int> pi;
#define itn int
#define nit int
#define nti int
#define tin int
#define tni int
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
 
bool isPrime(int n) {
 
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int sumDigit(int n) {
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
 
void fillPrefixSum(ll arr[], int n, ll prefixSum[]) {
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
 
void fillPrefixSum(vector<ll> v, ll prefixSum[]) {
    prefixSum[0] = v[0];
    // Adding present element with previous element
    for (int i = 1; i < v.size(); i++)
        prefixSum[i] = prefixSum[i - 1] + v[i];
}
 
vector<int> removeDuplicates(int arr[], int n) {
 
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
    } else
        p = 1;
 
    // if our approach is correct p = ans and k =1
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
 
bool isis(int n) {
    string ss = to_string(n);
    set<char> s;
    for (int i = 0; i < ss.length(); ++i) {
        s.insert(ss[i]);
    }
    if (s.size() == ss.length()) return true;
    else return false;
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
 
string somme(string n, int m) {
    if (m == 0) return n;
    else {
        string ss = "[" + n + "]";
        return somme(ss, m - 1);
    }
}
 
bool ready[100] = {false};
 
int dp[100] = {0};
 
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (ready[n]) return dp[n];
    else {
        dp[n] = fib(n - 1) + fib(n - 2);
        ready[n] = true;
        return dp[n];
    }
}
 
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
 
void fillStack(stack<char> &s, string values) {
    for (int i = values.length() - 1; i >= 0; i--) {
        s.push(values[i]);
    }
}
 
void rotate(int tab[2][2]) {
    int aux = tab[0][0];
    tab[0][0] = tab[1][0];
    tab[1][0] = tab[1][1];
    tab[1][1] = tab[0][1];
    tab[0][1] = aux;
}
 
std::string toBinary(int n) {
    std::string r;
    while (n != 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}
 
 
bool can(int time, int mid) {
    int sum = 0;
    sum = ((5 + mid * 5) * mid) / 2;
    if (sum <= time) return true;
    else return false;
}
 
vector<int> divisors(int x){
    vector<int>a;
    for (int l = 1; l*l<=x; ++l) {
        if(x%l==0){
            if(l*l!=x)
                a.push_back(x/l);
            a.push_back(l);
        }
    }
    return a;
}
 
/*cout.precision(20);
        cout << fixed << mx/ 2.0 << endl;*/
 
bool cmp(const string lhs, const string rhs) {
    return lhs.length() < rhs.length();
}
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
//cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        ll tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
        sort(tab,tab+n);
        ll sum=0;
 
        if(a<=tab[0]){
            sum+=abs(a-tab[0]);
            for (int i = 0; i < n - 2; ++i) {
 
                sum+=abs(tab[i]-tab[i+1]);
            }
        }
        else {
            if (a >= tab[n - 1]) {
                sum += abs(a - tab[n - 1]);
                for (int i = n - 1; i >= 2; --i) {
 
                    sum += abs(tab[i] - tab[i - 1]);
                }
            } else {
 
 
                int ind = 0;
                for (int i = 0; i < n; ++i) {
                    if (tab[i] > a) {
                        ind = i;
                        break;
                    }
 
                }
                int c = INT_MAX, b = INT_MAX;
                if (ind == 1) c = abs(a - tab[n - 1]);
                if (ind == n - 1) b = abs(tab[0] - a);
 
                int x = abs(a - tab[n-1]) + abs(tab[n - 1] - tab[1]);
                int z = abs(a - tab[n-2]) + abs(tab[n - 2] - tab[0]);
                int y = abs(a - tab[0]) + abs(tab[n - 2] - tab[0]);
                int w = abs(a - tab[1]) + abs(tab[n - 1] - tab[1]);
                sum += min({x, y, c, b,z,w});
 
 
            }
        }                if(n!=1)cout << sum;
        else cout<<0;
 
    }}