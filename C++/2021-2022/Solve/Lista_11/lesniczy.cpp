#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5;
const int END = 1e6;

int  n, m, s, d, a, b;
vector <pair<int, int> >wiktor[SIZE];
bool vis[SIZE];
int dist[SIZE];
set <pair <int ,int > > secik;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m >> s; //wczytujesz sobie liczbe miast dróg i początkowe miasto

    for(int i=1;i<=m;i++)   cin>>a>>b>>d, wiktor[a].push_back({b, d}), wiktor[b].push_back({a, d}); //lista sąsiedztwa 
    for(int i=1;i<=n;i++)   dist[i]=END;  // ustawiasz sobie całe distnace na nieskończoność
    
    dist[s]=0;  //dist od pierwszego miasta na 0 
    secik.insert({0, s}); //do seta dodajesz sobie dystans i nr pierwszego wierzchołka 

    while(!secik.empty())
    {

        pair <int , int> u = *secik.begin(); //wskaźnik na to co jest napoczątku seta
        
        //cout<<u.first<<" "<<u.second<<"\n";
        secik.erase(u); //usuwasz odwiedzony juz
        if(vis[u.second])  continue; //vis[u.second(czcyli wierzchołek)]
        vis[u.second]=true;
        for(auto i : wiktor[u.second]){
            dist[i.first]=min(dist[i.first], dist[u.second]+i.second);
            secik.insert({dist[i.first], i.first});
        }
    }

    for(int i=1;i<=n;i++)   cout<<dist[i]<<" ";
}