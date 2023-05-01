#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
cin >>t;
string tab[t];
    for (int i = 0; i < t; ++i) {
        cin>>tab[i];
    }
    for (int i = 0; i < t; ++i) {
        string s=tab[i];
        bool a0,a3;
        bool ap= false;
        sort(s.begin(),s.end());
        if(s[0]=='0') a0= true ;else a0= false;
        for (int j = 1; j < s.length(); ++j) {
            if ((int)s[j]%2==0) {ap= true; break;}
 
        }
        int n=0;
        for (int j = 0; j < s.length(); ++j) {
            n+=(int)s[j];
        }
        if (n%3==0) a3= true; else
             a3= false;
 
        (a0&a3&ap) ? cout<<"red"<<endl : cout<< "cyan"<<endl;
    }
    return 0;
    }