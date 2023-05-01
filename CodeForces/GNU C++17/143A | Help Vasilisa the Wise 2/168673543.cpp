#include "bits/stdc++.h"
#include <algorithm>
using namespace std ;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
 
 
bool isPrime(int n){
 
    for (int i = 2; i*i<=n ; ++i) {
        if(n%i==0) return false;
    }
    return true;
}
 
int sumDigit(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
bool isPower2(int n){
    double x= log2(n);
    if(x- floor(x)==0) return true;
    else return false;
}
int smallestPower(int n){
    int x=(int ) log2(n);
    return pow(2,x);
}
bool isInt(double n){
    if(ceil(n)== floor(n)) return true;
    else return false;
}
 
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
 
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--) {
 
int r1,r2,c1,c2,d1,d2;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
bool f= false;
int a,b,c,d;
        for (int i = 1; i < 10; ++i) {
            a=i;
            b=r1-a;
            if(b<=0 || b>9) continue;
            c=c1-a;
            if(c<=0 || c>9) continue;
            d=r2-c;
            if(d<=0 || d>9) continue;
            set<int> s;
            s.insert(a);s.insert(d);s.insert(c);s.insert(b);
            if(s.size()==4 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2) {f= true; break;}
 
        }
        if(f) cout<<a<<" "<<b<<endl<<c<<" "<<d;
        else cout<<-1;
    }
 
}
 