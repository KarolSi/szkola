#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
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
