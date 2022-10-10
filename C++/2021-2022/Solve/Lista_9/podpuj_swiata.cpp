#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;


vector <int> v[1000001];
queue <int> Q;
int stopien[1000001];




int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        stopien[b]++;
    }
    for (int i = 1; i <= n; i++)
        if(stopien[i] == 0)
            Q.push(i);

    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        for (auto i : v[Q.front()])
        {
            stopien[i] --;
            if (stopien[i] == 0)
                Q.push(i);
        }
        
        Q.pop();
            
    }
}