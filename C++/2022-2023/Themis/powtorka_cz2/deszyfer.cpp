#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    string s;
    string out;
    cin>>n>>s;
    for (int i = 0; i < s.size(); i+=n)
    {
        out+=s[i];
    }
    cout<<out;
    return 0;
}