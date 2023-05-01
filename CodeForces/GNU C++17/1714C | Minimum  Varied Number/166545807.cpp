 
#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n<10) cout<<n<<endl;
        else {
            string s="";
            int a=57;
            int b=9;
            while(n>9){
s+=(char)a;
n-=b;
a--;
b--;
 
            }
            if(n>0){
                for (int i = 9-s.length(); i >=1 ; --i) {
                    if(n-i>=0) {
 
                        s+=(char)i+48;
                        n-=i;
                    }
                }
            }
            std::reverse(s.begin(), s.end());
            cout<<s<<endl;
        }
 
}}