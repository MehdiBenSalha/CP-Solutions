#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
ll tab[t];
    for (int i = 0; i < t; ++i) {
        cin >> tab[i];
    }
    for (int i = 0; i < t; ++i) {
        if(tab[i]<15) cout << "NO"<<endl;
        else
 
        if (tab[i]%14 >0 && tab[i]%14 <=6) cout <<"YES"<<endl;
        else
             cout << "NO"<<endl;
    }
    return 0;
    }