#include <bits/stdc++.h>
using namespace std;
vector < int > mini ;
vector < int > maxi;
int n, m, mi = 100006, mx = -100006;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        if(mi>m) mi = m;
        if(mx<m) mx = m;
        mini.push_back(mi);
        maxi.push_back(mx);


    }
    for (int i = 0; i < n; i++)
    {
        cout<<mini[i]<<" ";
    }
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<maxi[i]<<" ";
    }
    return 0;
}