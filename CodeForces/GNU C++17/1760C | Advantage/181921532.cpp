#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std;
#define ll long long
#define nl '\n'
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen ("coffee.in", "r", stdin);
 
    int di[] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dj[] = {0, 0, 1, -1, 1, -1, -1, 1};
 
    int t=1;
    cin>>t;
    while (t--) {
int n;
cin>>n;
int tab[n];
vector<int> v;
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
            v.push_back(tab[i]);
        }
        sort(v.begin(),v.end());
        int mx=v[n-1];
        int mxx=v[n-2];
        for (int i = 0; i < n; ++i) {
            if(tab[i]==mx) cout<<tab[i]-mxx<<" ";
            else cout<<tab[i]-mx<<" ";
        }
        cout<<nl;
 
 
    }}