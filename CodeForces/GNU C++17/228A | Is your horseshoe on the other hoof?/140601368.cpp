#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int x=0;
int n;
vector<int> v;
    for (int i = 0; i < 4; ++i) {
      cin>>n;
      v.push_back(n);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < 3; ++i) {
        if(v[i]==v[i+1]){x++;}
    }
    cout<<x;
    return 0;
}