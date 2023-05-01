#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   string s;
   cin >>s;
   int x=0,y=0;
    for (int i = 0; i < s.length(); ++i) {
        if ((int)s[i]<91) x++; else y++;
    }
    (y<x) ? transform(s.begin(),s.end(),s.begin(), ::toupper) : transform(s.begin(),s.end(),s.begin(), ::tolower) ;
    cout<<s;
    return 0;
}