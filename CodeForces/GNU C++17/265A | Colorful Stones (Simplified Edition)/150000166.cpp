#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
string s,t;
cin >>s>>t;
int j=0;
    for (int i = 0; i < t.length(); ++i) {
        if(s[j]==t[i]){j++;}
    }
cout<<j+1;
    return 0;
}