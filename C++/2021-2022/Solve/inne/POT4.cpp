#include<bits/stdc++.h>
using namespace std;
long long n, m, o;

long long szybkie_mod(long long a, long long b, long long m)
{
    long long i;
    long long result = 1;
    long long x = a%m;
 
    for (i=1; i<=b; i<<=1)
    {
        x %= m;
        if ((b&i) != 0)
        {
            result *= x;
            result %= m;
        }
        x *= x;
    }
 
return result;
}


int main()
{
    cin>>n>>m>>o;

    cout<<szybkie_mod(n,m,o);
}