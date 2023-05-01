#include <iostream>
 
using namespace std;
int main() {
int n,h,x;
cin>>n>>h;
int tab[n];
for (int i=0;i<n;i++){
    cin>>tab[i];
}
x=n;
    for (int i=0;i<n;i++){
        if (tab[i]>h){x++;}
    }
cout<<x;
    return 0;
}