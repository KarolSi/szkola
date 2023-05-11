#include <bits/stdc++.h>
using namespace std;
int tab[27];
string s;
int w;
int main()
{
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        tab[(int(s[i]) -'a')] = 1;
        //cout<<int(s[i]);
    }
    for (int i = 0; i <= 26; i++)
    {
        if(tab[i] == 1) w++;
    }
    cout<<w;
    return 0;
}
