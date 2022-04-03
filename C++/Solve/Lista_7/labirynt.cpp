#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1100;
long long big=1e5;
long long  n, m, b, x , y, vx, vy, a;
char lab[SIZE][SIZE];
queue <pair <long long , long long> > Q;
bool visited[SIZE][SIZE];
long long dist[SIZE][SIZE];
long long  X[]={0, 1, 0, -1};
long long  Y[]={1, 0, -1, 0};
bool inside (int x, int y){if (x>=1 && y>=1 && x<=n && y<=m) return true;
                            else    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>lab[i][j];
            if(lab[i][j]=='S')   x=i,y=j;
            if(lab[i][j]=='M')   a=i, b=j;
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dist[i][j]=big;  
    dist[x][y]=0;
    Q.push({x, y});
    while(!Q.empty()) 
    {
        pair <long long, long long> u=Q.front(); 
        Q.pop();
        if(visited[u.first][u.second])  continue;
        visited[u.first][u.second]=true; 
        for(int i=0;i<=3;i++){
            vx =  u.first + X[i], vy =  u.second + Y[i];
            if(inside(vx, vy) && lab[vx][vy]!='#' )
            dist[vx][vy]=min(dist[vx][vy], dist[u.first][u.second]+1),Q.push({vx, vy});;
        }
    }
    if(dist[a][b] == big)   cout<<"NIE\n";
    else        cout<<dist[a][b];
}