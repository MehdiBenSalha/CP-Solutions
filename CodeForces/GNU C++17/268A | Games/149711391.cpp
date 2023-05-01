#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int countOccurrences(vector<int> arr, int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
            res++;
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y ;
    cin >>n;
    vector<int>h;
    vector<int>a;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        h.push_back(x);
        a.push_back(y);
    }
    sort(h.begin(), h.end());
    sort(a.begin(), a.end());
    int b=0;
    for (int i = 0; i < n; ++i) {
        b+= countOccurrences(a,n,h[i]);
    }
    cout<<b;
}