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
 
bool isBalanced(int n){
    string s= to_string(n);
    int o=0,e=0;
    string ss="02468";
    for (int i = 0; i < s.length(); ++i) {
        if(ss.find(s[i])!=string::npos) e++;
        else o++;
    }
    return (o==e);
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
 
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
ll f[1000001]={0};
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
   // cin>>t;
 
    while(t--) {
int n,m;
cin>>n>>m;
deque<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
cin>>x;
v.push_back(x);
        }
sort(v.begin(),v.end(),greater<int>());
        int cnt=0;
        while(v.size()!=0){
            int sum=v.front();
            if(sum>m) {cnt++;v.pop_front();}
            else {int r=ceil((double )m/sum);
                if(m%sum==0) r++;
                if(r>v.size()) break;
                else {
                    cnt++;
                    for (int i = 0; i < r - 1; ++i) {
                        v.pop_back();
                    }
                    v.pop_front();
                }
            }
        }
        cout<<cnt;
    }
 
 
}