#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int s=1;
    for (int i = 1; i <= n; i++)
    {
        s = s*i;
    }
    cout<<s;
    return 0;
}