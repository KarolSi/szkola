#include <bits/stdc++.h>
using namespace std;
int n,a,b;

vector <int> v[1000001];
bool B[1000001];
int tab[1000001];

void dfs(int u)
{
    B[u] = true;
    for (auto i : v[u])
        if (!B[i])
        {
            tab[i] = tab[u]+1;
            dfs(i);
            
        }

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        v[b].push_back(a);
        v[a].push_back(b);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<tab[i]<<"\n";
    }
    
    return 0;
}