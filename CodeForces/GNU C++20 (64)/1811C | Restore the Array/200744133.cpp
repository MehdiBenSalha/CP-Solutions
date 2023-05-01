#include"bits/stdc++.h"
#include<algorithm>
 
using namespace std;
#define ll long long
#define nl '\n'
 
int main() {
   
    int t;
    cin >> t;
    while (t--) {
 
int n;
cin>>n;
n--;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int> v(n+1);
v[0]=a[0];
v[n]=a[n-1];
//rhgbhrbhrgb
//rhfbrhbrhbgrg
for(int i=0;i<n-1;i++){
    v[i+1]=min(a[i],a[i+1]);
}
 
 
        for (int i = 0; i < v.size(); ++i) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }}