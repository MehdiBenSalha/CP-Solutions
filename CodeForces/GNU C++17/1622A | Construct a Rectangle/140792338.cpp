#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  vector<int> v;
  for (int i=0;i<3;i++ ){
   int h;
   cin>>h;
   v.push_back(h);
  }
  sort(v.begin(),v.end());
  if(v[2]==v[1]){if(v[0]%2==0){cout<<"YES"<<endl;
  }
  else{cout<<"NO"<<endl;}}
  else{
  
  if(v[0]==v[1]){if (v[2]%2==0){cout<<"YES"<<endl;
  }else{cout<<"NO"<<endl;
  }
  }else{if(v[2]==v[0]+v[1]){cout<<"YES"<<endl;
  }else{cout<<"NO"<<endl;
  }
  }}
 }return 0;
}