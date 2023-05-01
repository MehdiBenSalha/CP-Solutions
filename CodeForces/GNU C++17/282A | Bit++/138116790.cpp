#include <iostream>
#include "string"
using namespace std;
 
int main() {
    int n;
    int x=0;
    cin>>n;
    for (int i=0;i<n;i++){
        string str;
        cin>>str;
        if (str[1]=='+'){
            x++;
        }
        else if (str[1]=='-'){
            x--;
        }
 
 
    }
cout<<x;
 
 
    return 0;
}