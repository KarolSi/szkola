#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
long long END=1e5;
vector < pair<int , pair < int , int > > > v;
int n, m, res;
int x, y, z;
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
int main ()
{
      ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>x>>y>>z, v.push_back({z, {x, y}});
    for(int i=1;i<=n;i++)
        tab[i]=i;
    sort(v.begin(), v.end());
    int cc=n;
    for(int i=0;i<v.size();i++)
    {
        int a=v[i].second.first;
        int b = v[i].second.second; 
        int c=v[i].first;
    if(Find(a) != Find(b)){
            Union(a, b);
            Union(b, a);
            res+=c;
        }

    }
    cout<<res;
}