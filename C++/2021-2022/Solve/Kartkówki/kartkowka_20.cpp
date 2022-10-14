#include <bits/stdc++.h>
using namespace std;
int n,p,w, wynik=0;
int t[1000002];

void update (long long  x, long long y)
{
    x+=p, t[x] = y, x/=2;
    while(x!=0)
    {
        t[x] = t[2*x] + t[x*2+1];
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
        if(x%2==0) res+=t[x+1];
        if(y%2==1) res+=t[y-1];
        x/=2,y/=2;
    }
    return res;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>w;
        update(i,w);
    }
    cout<<add();
    
    return 0;
}