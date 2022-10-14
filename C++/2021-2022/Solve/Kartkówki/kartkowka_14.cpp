#include <bits/stdc++.h>
using namespace std;
int n,a,b, stopper = 1;

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
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        v[b].push_back(a);
        v[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<tab[i].first<<" "<<tab[i].second<<"\n";
    }
    
    return 0;
}