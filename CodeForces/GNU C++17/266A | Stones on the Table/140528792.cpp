#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int n;
cin>>n;
string str;
cin>>str;
int x=0;
    for (int i = 0; i < n-1; ++i) {
        if(str[i]==str[i+1]) x++;
 
    }
    cout<<x;
}