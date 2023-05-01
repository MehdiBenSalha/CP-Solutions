#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std;
#define ll long long
#define nl '\n'
 
bool croissant(int tab[],int n){
    for (int i = 1; i < n; ++i) {
        if(tab[i]<tab[i-1]) return false;
    }
    return true;
}
bool decroissant(int tab[],int n){
    for (int i = 1; i < n; ++i) {
        if(tab[i]>tab[i-1]) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen ("coffee.in", "r", stdin);
 
    int di[] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dj[] = {0, 0, 1, -1, 1, -1, -1, 1};
 
    int t=1;
    cin>>t;
    while (t--) {
int n;
cin>>n;
int tab[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab[i];
        }
 
int a=1;
        for (int i = 0; i < n - 1 && a ==1; ++i) {
            if(tab[i]<tab[i+1]){
                a=0;
                while (i<n-1 && tab[i+1]>=tab[i]  ){i++;}
                if(i==n-1) {cout<<"YES"<<nl;
                    break;}
                else cout<<"NO"<<nl;
        }
}
        if(a==1) cout<<"YES"<<nl;
 
    }}
    //test