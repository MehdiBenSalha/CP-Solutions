#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int n=123;
    int m;
    int x=0;
    string str;
    cin>>str;
    for (int i = 0; i <str.length(); ++i) {
        m=(int)str[i];
        if (abs(n-m)<=13){
            x+=(abs(n-m));
        }
        else{x+=26-abs(n-m);}
        n=(int)str[i];
        m=(int)str[i+1];
 
    }
    cout<<x<<endl;
 
    return 0;
}