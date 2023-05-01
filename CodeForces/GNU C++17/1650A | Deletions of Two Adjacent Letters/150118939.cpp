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
    char c;
 
    bool p= false;
    cin>>s>>c;
        string ss="";
        ss+=c;
    if(s.length()==1){  if(s==ss) cout<<"YES"<<endl; else cout<<"NO"<<endl;}
    else {
        for (int i = 0; i < s.length(); ++i) {
            if(s[i]==c && i%2==0) p= true;
        }
        if(p) cout<<"YES"<<endl;  else cout<<"NO"<<endl;}
    }
 
    return 0;
    }