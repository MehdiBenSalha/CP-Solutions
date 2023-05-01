#include <iostream>
#include "string"
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string* tab=new string [n];
    for(int i=0;i<n;i++)
    {
       
        cin>>tab[i];}
    for(int i=0;i<n;i++)
    {
        if (tab[i].length()<11){
            cout<<tab[i]<<endl;
        } else{
            cout<<tab[i][0]<<tab[i].length()-2<<tab[i][tab[i].length()-1]<<endl;
        }
 
    }
 
    return 0;
}