#include "bits/stdc++.h"
using namespace std ;
#define ll long long
ll test(){
    ll n,m;
    cin>>n>>m;
 
    if(n==1 && m==1) return 0;
 
    if((n==1 && m==2) || (n==2 && m==1)) return 1;
    if ((n==1 && m!=2) || (m==1 && n!=2)) return -1;
 
 
                ll pas=0;
                ll x=1;
                ll y=1;
 
    if(n==m) return 2*(n-1);
                 if(n<m) { y=n; x=n+1; pas+=2*(n-1)+1;}
                    else{ x=m; y=m+1; pas+=2*(m-1)+1;}
 
 
 
 
    if(x==m && y==n) return pas;
                else {
                    if(x==m){ll rest=n-y;
                        pas+=3* ceil(double (rest)/2);
                        pas+=rest/2;}
                    if(y==n){ll ret=m-x;
                        pas+=3* ceil(double (ret)/2);
                        pas+=ret/2;}
        return pas;
 
 
                }
            }
 
 
 
 
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   int t;
   cin>>t;
   while(t--) {
 
       cout << test() << endl;
   }}
 
 
 
 
 