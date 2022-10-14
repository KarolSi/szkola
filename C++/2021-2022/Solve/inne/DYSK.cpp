#include <bits/stdc++.h>
using namespace std;
int n, x;
int p[500020];
int Find (int u)
{
    if(p[u]==u)
        return p[u];
    p[u] = Find(p[u]);
    return p[u];
}
void Union (int x, int y)
{
    p[Find(x)] = Find(y);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<=n+1;i++)
        p[i]=i;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        Union(x, x+1);
        if(Find(x)!=n+1)
            cout<<Find(x)<<"\n";
        else
            cout<<"NIE\n";
    }

}