#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >>t;
    while (t--){
        int n ,y;
        int x=0;
        cin >>n;
        while (n>=10){
            y=n/10;
            x+=y*10;
            n=n-y*9;
        }
        x+=n;
        cout<<x<<endl;
    }
    return 0;
    }