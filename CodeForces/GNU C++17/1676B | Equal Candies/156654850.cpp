#include "bits/stdc++.h"
using namespace std ;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int w[n];
bool test= true;
cin>>w[0];
int sum=w[0];
    for (int i = 1; i <n ; ++i) {
        cin>>w[i];
        sum+=w[i];
        if(w[i]!=w[i-1]){
            test=false;
        }
    }
    if(!test){
        cout<<sum- (*min_element(w,w+n))*n<<endl;
    }
    else
    cout<<0<<endl;
}
 
    }