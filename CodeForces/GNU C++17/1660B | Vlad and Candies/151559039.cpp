#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(n==1){
            if(v[0]==1) cout<<"YES"<<endl; else cout<<"NO"<<endl;
        } else{
            if(v[v.size()-1]-v[v.size()-2]<=1) cout<<"YES"<<endl; else cout<<"NO"<<endl;
        }
     }
    return 0;
}