#include <iostream>
#include <algorithm>
#include "string"
 
using namespace std;
int main() {
 int t;
 cin>>t;
 for (int i=0;i<t;i++){
     int tab[7];
     for (int j=0;j<7;j++){
         cin>>tab[j];
     }
cout<<tab[0]<<" "<<tab[1]<<" "<<tab[6]-tab[1]-tab[0]<<endl;
 }
 
    return 0;
}