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
        if (s.length()<11){cout<<s<<endl;}
        else cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
 
 
}