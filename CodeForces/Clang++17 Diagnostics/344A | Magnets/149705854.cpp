#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    int r=1;
    cin>>n;
    int tab[n];
    for (int i=0;i<n;i++){cin>>tab[i];}
    for (int i=0;i<n-1;i++){
        if (tab[i]!=tab[i+1]){
            r++;
        }
    }
    cout<<r;
    return 0;
}