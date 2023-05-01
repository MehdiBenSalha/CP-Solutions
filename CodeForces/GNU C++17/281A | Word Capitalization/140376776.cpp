#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
string str;
cin>>str;
if((int)str[0]<97){cout<<str;}else{str[0]=char((int)str[0]-32);
cout<<str;}
    return 0;
}