#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--) {
    int n;
    int s=0;
    cin>>n;
    int tab[n];
    for (int i = 0; i < n; ++i) {
        cin >>tab[i];
        s+=tab[i];
    }
    s%n==0 ? cout<<0<<endl : cout<<1<<endl;
}
    return 0;
}