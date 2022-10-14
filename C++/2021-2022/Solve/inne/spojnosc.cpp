#include <bits/stdc++.h>
using namespace std;
int l, n, m, a, b, w;
bool f = true;
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

    cin>>l;
    for (int i=0; i<l; i++)
    {
        
        cin>>n>>m;
        for(int j=1;j<=n; j++)
            P[j]=j;



        for(int k=0; k<m; k++)
        {
            cin>>a>>b;
            Union(a, b);         
        }
        w = Find(1);
        for(int j=2;j<=n; j++)
        {
            if(Find(j)!=w)
                f = false;
        }
        if(f==false)
            cout<<"NIE\n";
        else
            cout<<"TAK\n";
        f = true;

    }
}