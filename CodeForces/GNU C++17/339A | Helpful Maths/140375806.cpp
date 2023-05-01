#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
  string str;
  string s="";
  cin>>str;
  if(str.size()==1){cout<<str;}
  else{
      vector<char>v;
      for (int i = 0 ; i < str.size(); ++i) {
          if(i%2==0)v.push_back(str[i]);
 
      }
      sort(v.begin(),v.end());
      for (int i = 0; i < v.size()-1; ++i) {
          s+=v[i];
          s+='+';
      }
      s+=v[v.size()-1];
      cout<<s;
  }
    return 0;
}