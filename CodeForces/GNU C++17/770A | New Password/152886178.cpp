#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;
    cin>>n>>k;
    string s="";
    for (int i = 0; i < k; ++i) {
        s+=char(i+97);
    }
    while (s.length()<n){
        s+=s;
    }
    string ss=s.substr(0,n);
    cout<<ss;
    return 0;
}
 