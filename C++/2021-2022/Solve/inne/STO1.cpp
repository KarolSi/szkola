#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1100000;
bool visited[SIZE], b[SIZE];
int graph[SIZE];
int n, res;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>graph[i];
        if(b[graph[i]]==1)     return cout<<"NIE\n", 0;
        else                b[graph[i]] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            int u=i;
            res++;
            while(visited[u]==0)
                visited[u] = 1, u = graph[u];
        }
    }
    cout<<res<<"\n";
    return 0;
}