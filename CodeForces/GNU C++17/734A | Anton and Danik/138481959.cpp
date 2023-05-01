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
        else {d++;}
    }
if( a==d) {cout<<"Friendship";}
else if (a<d){cout<<"Danik";}
    else{ cout << "Anton"; }
 
    return 0;
}