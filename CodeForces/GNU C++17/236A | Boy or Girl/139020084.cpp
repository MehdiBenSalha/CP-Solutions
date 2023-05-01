#include <iostream>
#include <algorithm>
#include "string"
 
using namespace std;
int main() {
 string str;
cin>>str;
    sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
if (str.size()%2==0){
    cout<<"CHAT WITH HER!";}
    else cout<<"IGNORE HIM!";
 
    return 0;
}
 