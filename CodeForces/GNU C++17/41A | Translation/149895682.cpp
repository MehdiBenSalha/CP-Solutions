#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   string s,t;
   cin >>s>>t;
    reverse(s.begin(),s.end());
    if(s==t){cout<<"YES";}else
        cout<<"NO";
}