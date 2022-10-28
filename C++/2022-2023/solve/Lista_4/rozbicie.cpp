#include <bits/stdc++.h>
using namespace std;
const int SIZE = 1000001;
int n, m, a, b;

int tab[SIZE];
int Find(int u)
{
    if(tab[u]==u)
        return u;
    else
    {
        tab[u]=Find(tab[u]);
        return tab[u];
    }
}

void Union (int x, int y)
{
    tab[Find(x)] = Find(y);
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        Union(a,b);
        
    }
    return 0;
}