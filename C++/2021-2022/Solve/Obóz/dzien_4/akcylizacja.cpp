#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int> > b; //black
vector <pair <int, int> > w; //white

int n, m;
int r, d;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>r>>d;
        if(r<d)     w.push_back({r,d});
        if(r>d)     b.push_back({r,d});
    }
    if(w.size()<b.size())      
    {
        cout<<w.size()<<"\n";
        for(auto i: w)        cout<<i.first<<" "<<i.second<<"\n";
    }
    else
    {
        cout<<b.size()<<"\n";
        for(auto i: b)        cout<<i.first<<" "<<i.second<<"\n";
    }

    return 0;
}