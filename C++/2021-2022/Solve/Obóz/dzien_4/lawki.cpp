#include <bits/stdc++.h>
using namespace std;
const long long SIZE = 1e6;
long long n,  m, mx = 0, smieci;
long long l[SIZE];

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i];
        if(mx < l[i])      mx = l[i]; 
    }
    for(int i = 1; i <= n; i++)
    {
        if(l[i] < mx)   m -= (mx - l[i]);
    }

    if(m<=0)    cout<<mx;
    else    cout<<(m+(n-1))/n + mx; 

    return 0;
}