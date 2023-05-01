#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >>t;
    while (t--){
     string s;
     string r="";
     cin >> s;
     if (s.length()==1) cout << s;
     else {
         s+='$';
         for (int i = 0; i < s.length()-1; ++i) {
             if(s[i]==s[i+1]){i++;}
             else { r+=s[i];}
         }
 
     }
        sort( r.begin(), r.end() );
        r.erase( unique( r.begin(), r.end() ), r.end() );
     cout<<r<<endl;
    }
    return 0;
    }