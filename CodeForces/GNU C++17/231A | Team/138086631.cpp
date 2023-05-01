#include <iostream>
using namespace std;
int main() {
    int n;
    int number=0;
    int p,v,t;
    cin>>n;
    for (int i=0;i<n;i++){
 
        cin>>p>>v>>t;
        if (p+v+t>1){number++;}
        
 
 
    }
    cout<<number<<endl;
    return 0;
}