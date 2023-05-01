#include <iostream>
 
using namespace std;
int main() {
  int t;
 
 
  cin>>t;
  for (int i=0;i<t;i++) {
      int r=1;
      int s=0;
      int n;
      cin >> n;
      int life[n];
      for (int j = 0; j < n; j++) {
 
          cin >> life[j];
 
      }
      if (life[0]==1){r++;}
      for (int j = 0; j < n - 1; j++) {
          if (life[j] + life[j + 1] == 0) {
              s = -1;
 
          }}
 
      for (int d = 1; d< n ; d++){
          if (life[d]==1 && life[d-1]==1 ){r+=5;}
          if (life[d]==1 && life[d-1]==0 ){r+=1;}
 
 
      }
          if (s == -1) { cout << "-1" << endl; }
          else {
              cout << r << endl;
          }
      }
 
 
}