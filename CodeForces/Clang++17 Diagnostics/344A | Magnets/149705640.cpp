#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    int n=1;
    cin >> t;
    int tab [t];
    for (int i = 0; i < t; ++i) {
cin >> tab[i];
    }
    for (int i = 0; i < t-1; ++i) {
        if (tab[i]!=tab[i+1]){n++;}
    }
cout << n;
 
 
 
}