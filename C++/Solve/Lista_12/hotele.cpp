#include <bits/stdc++.h>
using namespace std;

long long n,m,x, res;
long long p = 1<<20;
long long t[p*2];

void update (long long  x, long long y)
{
    x+=p, t[x] = y, x/=2;
    while(x!=0)
    {
        t[x] = t[2*x] + arr[x*2+1];
        x /= 2;
    }
}

int add (long long x, long long y)
{
    x+=p, y+=p;
    int res = ;
    while (x/2!=y/2)
    {
        if(x%2==0) res+=t[x+1];
        if(x%2==1) res+=t[y-1];
        x/=2,y/=2;
    }
    return res;
}






int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    return 0;
}