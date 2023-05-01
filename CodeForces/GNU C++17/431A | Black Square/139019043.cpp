#include <iostream>
#include "string"
using namespace std;
int main() {
  int a1,a2,a3,a4;
    int b1 = 0, b2 = 0, b3 = 0, b4=0;
 
    cin>>a1>>a2>>a3>>a4;
 
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++){
      switch (str[i]) {
          case '1': b1++;
              break;
          case '2':b2++;
              break;
          case '3': b3++;
              break;
          case '4':b4++;
              break;
      }
  }
cout<<a1*b1+a2*b2+a3*b3+a4*b4;
 
    return 0;
}