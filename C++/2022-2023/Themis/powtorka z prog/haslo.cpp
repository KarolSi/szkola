#include <bits/stdc++.h>
using namespace std;
string s;
int test;
bool a,b,c,d,e;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>s;
    if(s.size()>=5) a=true;
    for (int i = 0; i < s.size(); i++)
    {
        if(int(s[i])>=97) b=true;
        if(int(s[i])>=65 && int(s[i])<=90) c=true;
        if(int(s[i])>=48 && int(s[i])<=57) d=true;
        if(a && b && c && d )
        {
            cout<<"OK";
            return 0;
        }
        
    }
    cout<<"ZA PROSTE";
    return 0;
}