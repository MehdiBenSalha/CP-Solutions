#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
  int t;
  cin >>t;
    while (t--){
        int n;
        cin >> n;
        int x=floor((n-1)/2);
if (n%2==0){
        cout <<n-x-1<<" "<<x<<" "<<1<<endl;} else
{if (x%2==0){cout<<n-x<<" "<<x-1<<" "<<1<<endl;}else{cout<<n-x+1<<" "<<x-2<<" "<<1<<endl;}}
    }
}