#include <bits/stdc++.h>
using namespace std;
long long n, z;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    if(n==1 or n==0 or n==2)
    {
        cout<<"NIE";
        return 0;
    }
    cout<<1<<" "<<n-2<<" "<<n-2;
    return 0;
}