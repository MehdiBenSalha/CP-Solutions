#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
int n;
cin>>n;
int p,q;
set<int> s;
cin>>p;
    for (int i = 0; i < p; ++i) {
        int x;
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    for (int i = 0; i < q; ++i) {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n) cout <<"I become the guy." ; else cout<<"Oh, my keyboard!";
 
    return 0;
}
 
 