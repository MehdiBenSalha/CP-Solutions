#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
   deque<int> q;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        q.push_back(x);
    }
int a=0,b=0;
    bool last= true;
    for (int i = 0; i < n; ++i) {
        if(last){
          if(  q.front()>= q.back()){ a+=q.front(); last=!last; q.pop_front();}
          else{a+=q.back(); last=!last; q.pop_back();}
        } else{
            if(  q.front()>= q.back()){ b+=q.front(); last=!last; q.pop_front();}
            else{b+=q.back(); last=!last; q.pop_back();}
        }
    }
 
    cout<<a<<" "<<b;
    return 0;
}