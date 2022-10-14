#include <bits/stdc++.h>
using namespace std;
const  int SIZE = 1100000;
vector<int> graph[SIZE];
bool visited[SIZE];
int dist[SIZE];
queue <int> Q;
int a, b, n, m, x, y;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m>>b;
    while(m--)
        cin>>x>>y, graph[x].push_back(y), graph[y].push_back(x);    
    for (int i=1; i<=n; i++)
        dist[i] = SIZE;
    Q.push(b), dist[b]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if (visited[u])
            continue;
        visited[u] = true;
        for(auto v: graph[u])
            dist[v] = min(dist[v], dist[u]+1), Q.push(v);
    }
    for(int i=1;i<=n;i++)
        if(dist[i]!=SIZE)       cout<<dist[i]<<"\n";
        else                    cout<<"-1\n";

        
        return 0;
}