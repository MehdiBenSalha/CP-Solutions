#include "bits/stdc++.h"
#define ll long long
#define pb push_back
#define vl vector<ll>
#define loop(i, a, b) for (ll i = a, i < b; i++)
 
using namespace std;
// int res[1000001] = {0};
 
// ll v[1000001] = {0};
/*bool prim(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // cout << fixed << setprecision(9);
    ll t;
    cin >> t;
    while (t--)
    {
        char v[8][8];
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                cin >> v[i][j];
            }
        }
        ll b = 0, r = 0;
        ll j = 0;
        while (j < 8)
        {
            for (ll i = 0; i < 8; i++)
            {
 
                if (v[i][j] == 'B')
                    b++;
                if (b == 8)
                {
                    cout << "B" << endl;
                    j = 8;
                }
            }
            j++;
            b = 0;
        }
        j = 0;
        while (j < 8)
        {
            for (ll i = 0; i < 8; i++)
            {
 
                if (v[j][i] == 'R')
                    r++;
                if (r == 8)
                {
                    cout << "R" << endl;
                    j = 8;
                }
            }
            j++;
            r = 0;
        }
    }
    return 0;
}