//Zrobione essa 

#include <bits/stdc++.h>
using namespace std;
const long long END = 1e6+100;
const long long EDNLESS = 1e15;

long long n, m, a, b, q = EDNLESS; 
pair < long long, long long > tab[END];


long long Find(long long u)
{
    if(tab[u].first==u)
        return u;
    else
    {
        tab[u].first=Find(tab[u].first);
        return tab[u].first;
    }
}

void Union (long long x, long long y)
{
    if(tab[Find(y)].first != Find(x))
    {
        tab[Find(y)].second += tab[Find(x)].second;
        tab[Find(x)].first = Find(y);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;

    for (long long i = 1; i <= n; i++)
        cin>>tab[i].second;
    
    for (long long i = 1; i<=n; i++)
        tab[i].first = i;

    for (long long i = 0; i < m; i++)
    {
        cin>>a>>b;
        Union(a, b);
        Union(b, a);        
    }
    for(long long i = 1; i<=n; i++)
    {   
        if(i==Find(tab[i].first))
            if(q>tab[i].second)
                q = tab[i].second;
    }
    cout<<q;

    return 0;
}