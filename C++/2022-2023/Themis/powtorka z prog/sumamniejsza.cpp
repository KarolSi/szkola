#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long n,m;
    cin>>n>>m;
    if(n*m>n+m) cout<<1;
    else cout<<0;
    return 0;
}