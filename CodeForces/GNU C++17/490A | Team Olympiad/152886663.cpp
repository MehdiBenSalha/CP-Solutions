#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int x;
   int n;
   cin>>n;
   int tab[n];
   int t1=0,t2=0,t3=0;
   vector<int> v1; vector<int> v2; vector<int> v3;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        tab[i]=x;
        if(x==1) {t1++; v1.push_back(i+1);}
        if(x==2) {t2++; v2.push_back(i+1);}
        if(x==3) {t3++; v3.push_back(i+1);}
 
    }
    int w=min({t1,t2,t3});
    cout<<w<<endl;
    if(w!=0){
    for (int i = 0; i < w; ++i) {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }}
    return 0;
}
 