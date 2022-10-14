#include <bits/stdc++.h>
using namespace std;
int n,a,b,q,e,f,m, stopper = 1;

vector <int> v[1000001];
bool B[1000001];
pair <int , int> tab[1000001];

void dfs(int u)
{
    
    B[u] = true;
    tab[u].first = stopper; stopper++;
    for (auto i : v[u])
        if (!B[i])
        {
            dfs(i);      
        }
    tab[u].second = stopper; stopper++;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        
    }
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    dfs(1);

    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>e>>f;
        if(tab[e].first<tab[f].first and tab[e].second>tab[f].second)
            cout<<"TAK\n";
        else 
            cout<<"NIE\n";

    }
    return 0;
}