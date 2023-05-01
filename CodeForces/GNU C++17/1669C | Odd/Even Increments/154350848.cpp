#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int tab[n];
        for (int i = 0; i < n; ++i) {
            cin >> tab[i];
        }
        bool f = false;
        int a = tab[0] % 2;
        int b = tab[1] % 2;
        for (int i = 2; i < n; i++) {
            if (i % 2 == 0) {
                if (tab[i] % 2 != a) {
                    cout << "NO" << endl;
                    f = true;
                    break;
                }
            }
            if (i % 2 == 1) {
                if (tab[i] % 2 != b) {
                    cout << "NO" << endl;
                    f = true;
                    break;
                }
            }
 
        }
        if (!f) cout << "YES" << endl;
    }
    }
 
 
 
 
 