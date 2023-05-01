#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >>s;
        int x=s.length();
        if (x<11){cout<<s<<endl;}
        else cout<<s[0]<<x-2<<s[x-1]<<endl;
    }
 
 
}