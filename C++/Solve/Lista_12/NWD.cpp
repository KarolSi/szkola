#include <bits/stdc++.h>
using namespace std;

long long n,q,m,x, z,res,a,b,w;
const long long p = 1<<20;
long long t[p*2];

void update (long long  x, long long y)
{
    x+=p, t[x] = y, x/=2;
    while(x!=0)
    {
        t[x] =min(res, t[2*x] + t[x*2+1]);
        x /= 2;
    }
}

long long add (long long x, long long y)
{
    x+=p, y+=p;
    long long res = t[x]+t[y];
    if(x==y)
        return t[x];
    while (x/2!=y/2)
    {
        if(x%2==0) res=min(res,t[x+1]);
        if(y%2==1) res=min(res,t[y-1]);
        x/=2,y/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>q;
    for (long long  i = 1; i <= n; i++)
    {
        cin>>w;
        update(i, w);
    }
    for (long long i = 0; i < q; i++)
    {
        cin>>z;
        if(z==1)
        {
            cin>>a>>b;
            update(a,b);
        }
        else
        {
            cin>>a>>b;
            cout<<add(a,b)<<"\n";
        }
    }
    
    return 0;
}