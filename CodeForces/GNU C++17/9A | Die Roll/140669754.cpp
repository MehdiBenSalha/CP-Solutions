#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
int x,y;
cin>>x>>y;
int m= max(x,y);
int a=7-m;
int b=6;
    switch (a) {
        case 0:cout<<"0/1";
            break;
            case 1:cout<<"1/6";
            break;
        case 2:cout<<"1/3";
            break;
        case 3:cout<<"1/2";
            break;
        case 4:cout<<"2/3";
            break;
        case 5:cout<<"5/6";
            break;
        case 6:cout<<"1/1";
            break;
    }
    return 0;
}