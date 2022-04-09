#include <bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    if(n%17==0)
        cout<<0;
    else
        cout<<17-(n%17);

    return 0;
}