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
 
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin>>t;
 
    while (t--) {
       int n,m;
       cin>>n>>m;
       int tab[200]={0};
       bool ff= false;
        for (int i = 0; i < n; ++i) {
            int a,b;
            cin>>a>>b;
 
 
                tab[a + 1]++;
                tab[b + 1]--;
 
            if((i==0 && a!=0) ) ff= true;
        }
        for (int i = 1; i < 188; ++i) {
            tab[i]+=tab[i-1];
        }
        bool f= false;
        for (int i = 1; i <= m; ++i) {
            if(tab[i]==0){f= true; break;}
        }
        if(f || ff) cout<<"NO";
        else cout<<"YES";
 
    }
 
 
 
}