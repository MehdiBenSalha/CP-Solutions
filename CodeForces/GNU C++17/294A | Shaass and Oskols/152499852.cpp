#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int N[n];
    for (int i = 0; i < n; ++i) {
        cin>>N[i];
    }
int m;
    cin>>m;
    for (int i = 0; i < m; ++i) {
        int x,y;
        cin>>x>>y;
        if(x==1){N[1]+=N[0]-y; N[0]=0;}
      else  if(x==n){N[n-2]+=y-1; N[n-1]=0;}
        else {N[x-2]+=y-1; N[x]+=N[x-1]-y; N[x-1]=0;}
    }
    for (int i = 0; i < n; ++i) {
        cout<<N[i]<<endl;
    }
 
 
    return 0;
}