#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>s;
    if(s[s.size()-1]=='a') cout<<"dziewczynka";
    else  cout<<"chlopiec";
    
    return 0;
}