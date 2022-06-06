#include <bits/stdc++.h>
using namespace std;
long long n, k;
long long t[1<<20];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(long long i=1;i<k;i++)
    {
        t[i]=i;
    }
    if(k >= n-k )   return cout<<"NIE", 0;
    else        t[k]=n-k;
    for(long long i=1;i<=k;i++)   cout<<t[i]<<" ";
    return 0;
}