 
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
        int tab[n];
        int ind = 0;
        for (int i = 0; i < n; ++i) {
            cin >> tab[i];
 
        }
        reverse(tab, tab + n);
        set<int> s;
        for (int i = 0; i < n; ++i) {
            s.insert(tab[i]);
            if (s.size() < i + 1) {
                ind = i;
                break;
            }
        }
        if(ind==0) cout<<0<<endl;
        else
        cout << n - ind << endl;
    }
}