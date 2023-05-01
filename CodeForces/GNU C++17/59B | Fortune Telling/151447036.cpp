#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n,s=0;
  cin >> n;
  vector<int> v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s+=x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    if(s%2==1){cout<<s; }
    else {
        int y = -1;
        for (int i = 0; i < n; ++i) {
            if(v[i]%2==1){ y=v[i]; break;}
        }
        if(y!=-1) cout << s-y;
        else cout << 0;
    }
    return 0;
}