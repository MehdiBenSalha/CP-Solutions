#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--){
        int n,x;
        int y=1;
        cin>>n;
      vector<int> v;
        for (int i = 0; i < n; ++i) {
 
            cin >> x;
            v.push_back(x);
        }
        if (v[0]==1){y++;}
        for (int i = 1; i < n; ++i) {if (v[i]==0 && v[i-1]==0){ x=999999;
                break;} else if (v[i]==1 && v[i-1]==1){y=y+5;}
            else if (v[i]==1){y++;}
 
        }
        if(x==999999){cout<<-1<<endl;}
        else{cout<<y<<endl;}
 
    }
 
 
}