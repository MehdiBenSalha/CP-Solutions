#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
 
    while (t--){
ll n,b,x,y;
cin>>n>>b>>x>>y;
ll s=0;
ll tab[n+1] ;
tab[0]=0;
        for (int i = 1; i <= n; ++i) {
            if(tab[i-1]+x<=b){
                tab[i]=tab[i-1]+x;
                s+=tab[i-1]+x;
 
            }
            else {tab[i]=tab[i-1]-y;
                s+=tab[i-1]-y;
 
            }
        }
cout<<s<<endl;
    }
    return 0;
    }