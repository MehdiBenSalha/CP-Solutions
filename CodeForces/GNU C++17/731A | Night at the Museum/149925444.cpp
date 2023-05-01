#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    string s;
    int x;
    int n=0;
    char cur='a';
    cin >>s;
    for (int i = 0; i < s.size(); ++i) {
        x=s[i];
       int y= abs((int)cur -x);
       y<=13 ? n+=y: n+=26-y;
       cur =s[i];
    }
    cout << n;
}