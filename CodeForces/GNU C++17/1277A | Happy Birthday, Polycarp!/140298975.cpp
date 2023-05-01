#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        double n;
       cin>>n;
double x=0;
if (n<10){x=n;
cout<<x<<endl;} else{
    double a=floor( log10(n));
    x=9*a;
    double b= pow(10,a);
    int c=n/b;
    x+=c;
    b*=10;
    b--;
    b/=9;
    b*=c;
if(n<b){x--;}
cout<<x<<endl;
 
 
}
    }
 
 
    return 0;
}