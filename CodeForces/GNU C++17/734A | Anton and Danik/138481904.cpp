#include <iostream>
#include "string"
using namespace std;
int main() {
string y;
  int n;
  int a=0;
  int d=0;
    cin>>n;
    cin>>y;
    for (int i=0;i<n;i++){
        if(y[i]=='A'){a++;}
        if(y[i]=='D'){d++;}
    }
if( a==d) {cout<<"Friendship";}
if (a<d){cout<<"Danik";}
    if (a > d) { cout << "Anton"; }
 
    return 0;
}