#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int x;
   int n;
   cin>>n;
    int s=0;
  vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        v.push_back(x);
        s+=x;
    }
    std::sort(v.begin(), v.end(),greater<>());
    int r=0;
    int j=0;
    int a=0;
    while (r<=s && j!=n){
        r+=v[j];
        s-=v[j];
        j++;
a++;
    }
    cout<<a;
 
    return 0;
}
 