#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
string s,ss;
cin>>s>>ss;
int j=0;
    for (int i = 0; i < ss.length(); ++i) {
        if(ss[i]==s[j]){j++;}
    }
    cout<<j+1;
    return 0;
}