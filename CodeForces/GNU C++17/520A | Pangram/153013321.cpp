#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string str;
    cin>>n>>str;
    if (n<26) cout<<"NO"; else {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::sort(str.begin(), str.end());
        str.erase(unique(str.begin(), str.end()), str.end());
        if (str.length()==26) cout<<"YES"; else cout<<"NO";
    }
 
 
    return 0;
}
 
 