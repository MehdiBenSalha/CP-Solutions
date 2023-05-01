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
        int n,k,q;
 
 
        cin>>n>>k>>q;
        int f[200001]={0};
        pair<int,int> tab[n];
        for (int i = 0; i < n; ++i) {
            int a,b;
            cin>>a>>b;
            tab[i]= make_pair(a,b);
            f[a]++;
            f[b+1]--;
        }
        for (int i = 0; i <= 200000; ++i) {
            f[i+1]+=f[i];
        }
 
        int ff[200001]={0};
        if(f[0]>=k) ff[0]=1;
        for (int i = 1; i <= 200000; ++i) {
            if(f[i]>=k) ff[i]=ff[i-1]+1;
            else ff[i]=ff[i-1];
        }
 
        for (int i = 0; i < q; ++i) {
            int l,r;
            cin>>l>>r;
            cout<<ff[r]-ff[l-1]<<endl;
        }
 
    }
 
}