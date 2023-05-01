#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >>t;
    while (t--) {
 
        int n ;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<v[n-1]+v[n-2]<<endl;
    }
 
    return 0;
    }