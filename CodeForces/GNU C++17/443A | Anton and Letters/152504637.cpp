#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    set<char> s;
    string st;
    getline(cin,st);
for (int i = 1; i < st.length()-1; i+=3) {
s.insert(st[i]);
 
    }
cout<<s.size();
    return 0;
}
 