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
       int n,q;
       cin>>n>>q;
       int tab[200007]={0};
       int a[n+1]={0};
        for (int i = 1; i <= n; ++i) {
            cin>>a[i];
        }
 
        for (int i = 0; i < q; ++i) {
            int a,b;
            cin>>a>>b;
 
 
                tab[a]++;
                tab[b+1 ]--;
 
        }
        for (int i = 1; i < 200007; ++i) {
            tab[i]+=tab[i-1];
        }
        sort(a,a+n+1,greater<int>());
        sort(tab,tab+200007,greater<int>());
 
ll sum=0;
        for (int i = 0; i < n; ++i) {
            sum+=(ll)a[i]*tab[i];
        }
        cout<<sum;
 
    }
 
 
 
}