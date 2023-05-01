 
#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int aa=h*60 +m;
        int tab1[n];
        int tab2[n];
        int tab3[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab1[i];
            cin>>tab2[i];
            tab3[i]=(tab1[i]*60 +tab2[i])-aa;
            if(tab3[i]<0) tab3[i]+=1440;
 
        }
        sort(tab3,tab3+n);
        cout<<tab3[0]/60<<" "<<tab3[0]%60<<endl;
 
 
 
    }
}