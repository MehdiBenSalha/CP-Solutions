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
 
void fillPrefixSum(ll arr[], int n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
 
vector<int> removeDuplicates(int arr[], int n)
{
 
    int i;
 
    // Initialise a set
    // to store the array values
    set<int> s;
 
    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
 
        // insert into set
        s.insert(arr[i]);
    }
 
    set<int>::iterator it;
 
    // Print the array with duplicates removed
    vector<int> v;
    for (it = s.begin() , i=0; it != s.end(); ++it , i++)
        v.push_back(*it);
    return v;
}
 
bool isBalanced(int n){
    string s= to_string(n);
    int o=0,e=0;
    string ss="02468";
    for (int i = 0; i < s.length(); ++i) {
        if(ss.find(s[i])!=string::npos) e++;
        else o++;
    }
    return (o==e);
}
 
 
 
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
ll f[1000001]={0};
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
     cin>>t;
 
    while(t--) {
 
int n;
cin>>n;
int a=0,b=0,c=0;
        set<string>aa;set<string>bb;set<string>cc;
 
string tab1[n];string tab2[n];string tab3[n];
        for (int i = 0; i < n; ++i) {
            cin>>tab1[i];
        }for (int i = 0; i < n; ++i) {
            cin>>tab2[i];
        }for (int i = 0; i < n; ++i) {
            cin>>tab3[i];
        }
        for (int i = 0; i < n; ++i) {
 
            string tab[3];
            tab[0] = tab1[i];
            tab[1] = tab2[i];
            tab[2] = tab3[i];
            aa.insert(tab[0]);
            bb.insert(tab[1]);
            cc.insert(tab[2]);
        }
        for (int i = 0; i < n; ++i) {
 
            string tab[3];
            tab[0] = tab1[i];
            tab[1] = tab2[i];
            tab[2] = tab3[i];
 
            if (bb.find(tab[0]) == bb.end() && cc.find(tab[0]) == cc.end()) a+=3;
            else if(bb.find(tab[0]) == bb.end()) a++;
            else if(cc.find(tab[0]) == cc.end()) a++;
 
            if (bb.find(tab[2]) == bb.end() && aa.find(tab[2]) == aa.end()) c+=3;
            else if(bb.find(tab[2]) == bb.end()) c++;
            else if(aa.find(tab[2]) == aa.end()) c++;
 
 
            if (aa.find(tab[1]) == aa.end() && cc.find(tab[1]) == cc.end()) b+=3;
            else if(aa.find(tab[1]) == aa.end()) b++;
            else if(cc.find(tab[1]) == cc.end()) b++;
 
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    }