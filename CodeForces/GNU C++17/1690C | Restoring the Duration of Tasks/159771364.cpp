#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--){
    int n;
    cin>>n;
    int s[n];
    int f[n];
        for (int i = 0; i < n; ++i) {
            cin>>s[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>f[i];
        }
        int currs=s[0];
        int currf=f[0];
        if(n==1) cout<<currf-currs<<endl;
        else{vector<int> v;
            v.push_back(currf-currs);
            for (int i = 1; i < n; ++i) {
                (s[i]>=f[i-1]) ? currs=s[i]: currs=f[i-1];
                v.push_back(f[i]-currs);
            }
            for (int i = 0; i < v.size(); ++i) {
cout << v[i]<<" ";
            }
            cout<<endl;
        }
    }
 
}