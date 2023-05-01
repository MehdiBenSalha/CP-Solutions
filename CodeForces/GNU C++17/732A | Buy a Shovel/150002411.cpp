#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
int k,r;
cin >>k>>r;
int x=1;
int p=k;
while (k%10 != r){
    if(k%10==0) { break;}
    x++;
    k+=p;
 
}
cout << x;
    return 0;
}