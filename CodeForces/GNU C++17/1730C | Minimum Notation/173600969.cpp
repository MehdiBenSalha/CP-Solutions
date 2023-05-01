#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl='\n';
//double const pi= 3.141592653;
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };
const int MOD=1e9+7;
ll bigPower(ll x,ll y){
    if(y==0)
        return 1;
    if(y%2==0)
        return((bigPower(x,y/2))%MOD*(bigPower(x,y/2))%MOD)%MOD;
    return ((x%MOD)*(bigPower(x,y-1)%MOD))%MOD;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
   string s;
   cin>>s;
   bool vis[s.size()];
    memset(vis,false,sizeof vis);
    for (int i = 0; i <9 ; ++i) {
        int lastind=0,ind=0;
        for (int j = 0; j < s.size(); ++j) {
          if(s[j]-'0'==i){
              ind=j;
              for (int k = lastind; k < ind; ++k) {
                  if(s[k]=='9')
                      continue;
                  else{
                      if(s[k]-'0'>i&&!vis[k]){
                      s[k]++;
                      vis[k]= true;
                      }
                  }
              }
              lastind=ind+1;
          }
        }
    }
sort(s.begin(),s.end());
    cout<<s<<nl;
}
}