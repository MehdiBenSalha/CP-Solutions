#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
int tab[n];
    for (int i = 0; i < n; ++i) {
        cin>>tab[i];
    }
    int crime=0;
    int rec=0;
    for (int i = 0; i <n; ++i) {
       if(rec==0){if(tab[i]==-1) crime++; else rec+=tab[i];}
       else{if(tab[i]==-1) rec--; else rec+=tab[i];}
    }
    cout<<crime;
    return 0;
}