#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
 
    while (t--){
        int n,a;
 
        cin>>n>>a;
        if(a==10){string gg="1";
            if (n==1) cout<<"-1";
            else {
                for (int i = 0; i <n-1 ; ++i) {
                    gg+='0';
 
                }cout<<gg;
            }
        }
        else {
            char ch = (char ) a+48;
 
            string str = "";
            str.append(n, ch);
            cout<<str;
        }
 
 
    }
}
 
 
 
 
 
 
 
 
 