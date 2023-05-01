#include <iostream>
#include "string"
using namespace std;
int main() {
   string str;
   cin>>str;
   int l=0;
   for(int i=0;i<str.size();i++){
       if (str[i]=='4' || str[i]=='7' ){l++;}
   }
  // cout<<l;
   if (l==7||l==4){cout<<"YES";}
   else{cout<<"NO";}
    return 0;
}