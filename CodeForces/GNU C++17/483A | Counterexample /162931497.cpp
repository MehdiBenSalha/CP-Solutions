#include "bits/stdc++.h"
#include <algorithm>
 
using namespace std ;
#define ll long long
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;
 
    return true;
}
 
// Function to return the smallest
// prime number greater than N
int nextPrime(int N)
{
 
    // Base case
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
 
    while (t--){
        ll l,r;
        cin>>l>>r;
        if(r-l <2 || (r-l==2 && l%2==1) ) cout<<-1;
        else {
            if(l%2==0){cout<<l<<" "<<l+1<<" "<<l+2;}
            else cout<<l+1<<" "<<l+2<<" "<<l+3;
        }
 
 
 
    }
}
 
 
 
 
 
 
 
 
 