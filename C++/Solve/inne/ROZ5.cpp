#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, h;
int P[1000010];

int Find (int u)
{
    if(P[u]==u)
        return u;
    P[u] = Find(P[u]);
    return P[u];
}
void Union (int x, int y)
{
    P[Find(x)] = Find(y);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    h = n;
    for(int j=1;j<=n; j++)
        P[j]=j;

    for(int k=1; k<=m; k++)
    {
        cin>>a>>b;
        if(Find(a)!=Find(b))
            Union(a,b), h--;
        cout<<h<<"\n";
    }
    
}