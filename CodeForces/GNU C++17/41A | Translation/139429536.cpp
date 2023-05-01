#include <iostream>
#include "string"
#include "bits/stdc++.h"
using namespace std;
int main() {
    string s1,s2;
 
    cin>>s1;
    cin>>s2;
   reverse(s2.begin(),s2.end());
 
    if (s2==s1){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}