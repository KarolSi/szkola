#include <bits/stdc++.h>
using namespace std;
string s;
int male,duze;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(int(s[i]>=97)) male++;
        else duze++;
    }
    cout<<male<<" "<<duze;
    return 0;
}