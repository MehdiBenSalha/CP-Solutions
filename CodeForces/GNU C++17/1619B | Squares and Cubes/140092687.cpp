#include <iostream>
#include "bits/stdc++.h"
using namespace std;
bool isPerfectSquare(long long x)
{
    // Find floating point value of
    // square root of x.
 
 
        long long sr = sqrt(x);
 
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
 
 
bool perfectCube(long long N)
{
    long long cube_root;
    cube_root = round(cbrt(N));
 
    // If cube of cube_root is equals to N,
    // then print Yes Else print No
    if (cube_root * cube_root * cube_root == N) {
        
        return(true);
    }
    else {
        
        return(false);
    }
}
bool perfect(long long n)
{
    if (isPerfectSquare(n)){
        return true;
    } else{
        return (perfectCube(n));
    }
}
int main() {
   int t;
   cin>>t;
   while(t--){
       long long n;
       int x=0;
       cin>>n;
       int a,b,c=0;
       a= floor(cbrt(n));
       b= floor(sqrt(n));
 
       for (int i = 1; i <= a; ++i) {
           if (isPerfectSquare(i*i*i)){
               c++;
 
           }
           
       }
       cout<<a+b-c<<endl;
   }
 
 
 
    return 0;
}