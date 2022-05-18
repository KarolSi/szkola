#include <bits/stdc++.h>
using namespace std;

int n, a, b, c;
vector <int> v[500001];
bool B[500001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        v[a].push_back({b, c}); 
        v[b].push_back({a, c});
    
    }

    
    
    
    return 0;
}