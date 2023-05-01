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
string s;
cin>>n>>s;
        sort(s.begin(),s.end());
        cout<<s[n-1]-96<<nl;
 
 
    }}