#include <bits/stdc++.h>
using namespace std;
int n,a,m,b,q, stopper = 1;

vector <int> v[1000001];
int B[1000001];
string w;

void dfs(int u)
{
    B[u] = 1;
    for (auto i : v[u])
    {
        if(B[i]==1)
            w = "TAK\n" ;
        if(B[i]==0)
            dfs(i);
    }
    B[u] = 2;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>q;
    for(int i=0; i<q; i++)
    {    
        cin>>n>>m;
        for (int j = 0; j < m; j++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            
        }
        w = "NIE\n";
        for(int j=1; j<=n; j++)
        {   
            if(!B[j])
            dfs(j);
        }
        cout<<w;
        for(int j=0; j<=n; j++)
        {
            v[j].clear();
            B[j] = 0;
        }
        
        
    }

    
    return 0;
}