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
 
 
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
ll f[1000001]={0};
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
   cin>>t;
 
    while(t--) {
 
int n;
cin>>n;
string s;
cin>>s;
ll score=0;
        for (int i = 0; i < n; ++i) {
            if(s[i]=='R') score+=n-i-1;
            else if(s[i]=='L') score+=i;
        }
        int i=0;
        vector<ll> v;
 
        while(i<=n/2 -1){
            if(s[i]=='L') {score+=n-2*i-1; v.push_back(score);}
           if(s[n-i-1]=='R') {score+=n-2*i-1; v.push_back(score);}
            i++;
            if(n-i-1==i) break;
 
        }
        if(n==1) cout<<0<<endl;
        else if(v.size()==0){
            for (int j = 0; j < n; ++j) {
                cout<<score<<" ";
            }
        cout<<endl;
        }
        else{
            int res=n-v.size();
            if(res<=0) {
                for (int j = 0; j < n; ++j) {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
 
            }
            else if(res>0){
                for (int j = 0; j < v.size(); ++j) {
                    cout<<v[j]<<" ";
 
                }
                for (int j = 0; j < res; ++j) {
                    cout<<v[v.size()-1]<<" ";
                }
                cout<<endl;
            }
        }
    }
    }