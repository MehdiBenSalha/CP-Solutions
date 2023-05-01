#include <iostream>
#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        ll x=0;
        int n;
        cin>>n;
 
        string str;
        cin>>str;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int a;
            a=((int)str[i])-48;
            x+=a;
            v.push_back(a);
        }
        while(v.size()>0) {
 
 
            if(v.back()%2==0){
                x-=v.back();
                v.pop_back();
 
 
            }else{break;}
        }
 
        if(v.empty()){cout<<"-1"<<endl;}
        else{
            if(x%2==0 && x>0){
                for (int i = 0; i < v.size(); ++i) {
if(v[i]!=0){
                    cout<<v[i];
                }}
                cout<<endl;
            }
            else{
                for (int j = 0; j < v.size()-1; ++j) {
                    if(v[j]%2==1){    x--;            v.erase(v.begin() + j);
                        break;
                    }
                }
if(x%2==1){cout<<"-1"<<endl;}else{
                int h=0;
                for (int k = 0; k < v.size(); ++k) {
                    if(v[k]==0){h++;}
                }
                if(v.empty()||(h==v.size())){cout<<"-1"<<endl;}
                else{for (int p = 0; p< v.size(); ++p) {
                        if (v[p] != 0) {
                            cout << v[p];
                        }
                    }
                    cout<<endl;
                }
 
            }
        }
 
}
    }
    return 0;
}