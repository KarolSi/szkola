#include<bits/stdc++.h>
using namespace std;
int n,m,q,w,a,b;
int p[1100020];
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
    cin>>n>>m>>q;
    for(int i=0;i<=n;i++)
        p[i]=i;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        Union(a,b);
    }
    while(q--)
    {
        cin>>w>>a>>b;
        if(w==0)
        {
            if(Find(a)==Find(b))
                cout<<"TAK\n";
            else
                cout<<"NIE\n";
        }
        if(w==1)
            Union(a, b);
    }


}