#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int n,x,s=0;
    cin>>n;
    vector<int >v;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        v.push_back(x);
        s+=x;
    }
    if(s%n==0){cout<<0<<endl;}else{cout<<1<<endl;}
}
return 0;
}