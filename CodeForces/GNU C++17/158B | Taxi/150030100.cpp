#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
int a1=0;
int a2=0;
int a3=0;
int a4=0;
int n=0;
int x,y;
cin>>t;
int tab[t];
    for (int i = 0; i < t; ++i) {
        cin>>tab[i];}
    for (int i = 0; i < t; ++i) {
       if (tab[i]==1) a1++;
       else if (tab[i]==2) a2++;
       else if (tab[i]==3) a3++;
       else a4++;
 
    }
if (a3>=a1){
    a1=0;
    if (a2%2==0){a2=a2/2;}
    else
        a2=a2/2 +1;
    n=a1+a2+a3+a4;
 
}
else {
    a1=a1-a3;
    if (a2%2==0){a2=a2/2;}
    else
    {a2=a2/2 +1;
        a1=a1-2;}
    if (a1<0) a1=0;
    x=a1/4;
    y=a1-x*4;
 if(y==0)   n=a4+a3+a2+x;
 else n=a4+a3+a2+x+1;
}
   cout<<n;
 
 
 
 
    return 0;
    }