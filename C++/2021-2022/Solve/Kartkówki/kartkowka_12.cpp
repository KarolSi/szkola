#include <bits/stdc++.h>
using namespace std;
const  int SIZE = 500000;
vector<int> graph[SIZE];
bool visited[SIZE];
int dist[SIZE];
queue <int> Q;
int C[SIZE];
int a, b, n, m, x, y, ans,l;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>l;
    for(int p=0; p<l; p++)
        {
        cin>>n>>m;
        while(m--)
            cin>>x>>y, graph[x].push_back(y), graph[y].push_back(x);    
        for (int i=1; i<=n; i++)
            dist[i] = SIZE;
        //cin>>a;
        //Q.push(a), dist[a]=0;
        cin>>b;
        for (int i = 1; i <= b; i++)
        {
            cin>>C[i];
        }
        sort(C+1, C+1+b);
        while(!Q.empty())
        {
            int u=Q.front();
            Q.pop();
            if (visited[u])
                continue;
            visited[u] = true;
            for(auto v: graph[u])
            {
                dist[v] = min(dist[v], dist[u]+1);
                Q.push(v);
            }
        }

        ans=C[1];
        for(int j=1;j<=b;j++)   if(dist[C[j]]< dist[ans] )   ans=C[j];        
        
        cout<<ans;
        }
}


