#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    int tab[n];
    for (int i = 0; i < n; ++i) {
        cin>>tab[i];
 
    }
    int x=0;
    int y=tab[k-1];
    for (int i = 0; i < n; ++i) {
        if(tab[i]>0 && tab[i]>=y){x++;}
 
    }
    cout<<x<<endl;
    return 0;
}