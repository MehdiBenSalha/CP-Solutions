#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   string s;
   cin >> s;
   set<char> se ;
    for (int i = 0; i < s.length(); ++i) {
        se.insert(s[i]);
    }
    int x=se.size();
    if (x%2==0){cout<<"CHAT WITH HER!";} else cout<<"IGNORE HIM!";
}