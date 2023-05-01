#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int k,r;
cin>>k>>r;
int i=1;
    for ( i = 1; i <11 ; ++i) {
        if((i*k)%10==r || (i*k)%10==0){cout<<i;
            break;}
    }
 
    return 0;
}