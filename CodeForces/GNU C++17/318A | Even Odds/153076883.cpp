#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int n,k;
    cin>>n>>k;
    unsigned long long int last= n/2;
    if(n%2==1) last++;
 
    (k<=last) ? cout<<2*(k-1) +1 : cout<<2*(k-last);
 
    return 0;
}
 
 