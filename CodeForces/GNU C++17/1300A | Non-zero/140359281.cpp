#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int y=0,s=0;
      vector<int>v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            if(x==0){
                y++;
 
            v.push_back(x+1);
        } else{v.push_back(x);}
    }
        for (int i = 0; i < n; ++i) {
            s+=v[i];
        }
        if(s==0){
            y++;
        }
        cout<<y<<endl;
    }
    return 0;
}