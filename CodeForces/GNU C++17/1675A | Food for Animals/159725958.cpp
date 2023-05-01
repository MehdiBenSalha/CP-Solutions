#include "bits/stdc++.h"
using namespace std ;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if((x+y)>(a+b+c)) cout<<"NO"<<endl;
    else{
        (x!=0) ? x-=a:x=0;
        (y!=0) ? y-=b:y=0;
        if(x>0){c-=x;}
        if(c<0) cout<<"NO"<<endl;
        else{if(y>0){c-=y;}
            if(c<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;}
    }
    }
 
}