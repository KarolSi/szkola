#include <bits/stdc++.h>
using namespace std;

int main()
{
    int wynik;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        wynik+=s[i]-48;
    }
    cout<<wynik;
    return 0;
}
