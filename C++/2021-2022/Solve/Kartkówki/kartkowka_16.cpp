#include <bits/stdc++.h>
using namespace std;
int n, m, s, t, a, b,r;
vector <int> v[1000001];
vector <int> v1[1000001];
bool B[1000001];
bool B1[1000001];


void dfs(int u)
{
    
    B[u] = true;
    for (auto i : v[u])
        if (!B[i])
        {
            dfs(i);
            r ++;    
        }
}
void dfs1(int u)
{
    B1[u] = true;
    for (auto i : v1[u])
        if (!B1[i])
        {
            dfs1(i); 
            r++;   
        }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    cin>>s>>t;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        
        v1[b].push_back(a);
    }
    dfs(t);
    dfs1(s);
    cout<<n-r-2;
    return 0;
}