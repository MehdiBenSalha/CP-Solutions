#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
    string s1,s2 ;
    cin>>s1>>s2;
    for_each(s1.begin(), s1.end(), [](char & c){
        c = ::tolower(c);
    });for_each(s2.begin(), s2.end(), [](char & c){
        c = ::tolower(c);
    });
    if(s1<s2){cout<<-1;}
    if(s1==s2){cout<<0;}
    if(s1>s2){cout<<1;}
    return 0;
}