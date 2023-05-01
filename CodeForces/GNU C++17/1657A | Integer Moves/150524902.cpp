#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
 
 
        long long sr = sqrt(x);
 
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    for (int i = 0; i < t; ++i) {
int x,y;
cin>>x>>y;
if(x==0 && y==0) cout<<0<<endl;
else {
int a=0,b=0,r=1;
        while (!isPerfectSquare((x-a)*(x-a) + (y-b)*(y-b))){
            r++;
            for (int j = x; j >0; --j) {
                for (int k = y; k > 0; --k) {
                    if (isPerfectSquare((x-j)*(x-j) + (y-k)*(y-k))){a=j;
                        b=k;
                        break;
                }
 
            }
                break;
        }
    }
        cout<<r<<endl;}}
        return 0;
    }