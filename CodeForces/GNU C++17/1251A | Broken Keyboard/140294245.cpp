#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin >> str;
        int q = 1;
        for (int j = 0; j < str.length() - 1; ++j) {
            if (str[j] == str[j + 1]) { q++; }
        }
        if (q == str.length() && q%2==1) { cout << str[0] << endl; }
        else {
            if (str.length() == 1) { cout << str << endl; }
            else {
                string x = "";
                for (int i = 0; i < str.length() - 1; ++i) {
                    if (str[i] != str[i + 1]) {
                        x += str[i];
                    } else { i++; }
 
                }
                int n = str.length();
                if (str[n - 1] != str[n - 2]) { x += str[n - 1]; }
 
int g=1;
                for (int s = str.size() - 2; s >= 0; s--) {
                    if(str[s]==str[n-1]){g++;} else {break;}
                }
                if(g%2==1){x+=str[n - 1];}
                sort(x.begin(), x.end());
                x.erase(std::unique(x.begin(), x.end()), x.end());
                cout<<x<<endl;
 
            }
 
        }
    }
    return 0;
}
 