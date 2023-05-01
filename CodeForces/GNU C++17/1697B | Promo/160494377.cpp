#include "bits/stdc++.h"
using namespace std ;
#define ll long long
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (ll i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<ll>());
 
    ll tab[n];
    fillPrefixSum(arr, n, tab);
 
    while (q--){
      ll x,y;
      cin>>x>>y;
if(x==y){cout<<tab[x-1]<<endl;}
else{
ll s=0;
ll h=x-y;
        s=tab[x-1]-tab[h-1];
       cout<<s<<endl;
    }}
}
 