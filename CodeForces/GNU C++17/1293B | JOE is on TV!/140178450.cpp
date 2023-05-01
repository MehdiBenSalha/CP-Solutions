#include <iostream>
#include "bits/stdc++.h"
using namespace std;
 
 
int main() {
 double n;
 double x=0;
 cin>>n;
    for (double i = 1; i < n + 1; ++i) {
        x+=(double )1/i;
    }
 
cout<<x;
 
 
 
    return 0;
}