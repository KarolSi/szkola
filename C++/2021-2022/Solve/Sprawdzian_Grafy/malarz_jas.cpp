#include <bits/stdc++.h>
using namespace std;

int n, a,b, x, wynik;
int tab[1000001];

vector <int> v[500001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        tab[i] = x;
    }
    
   for (int i = 1; i < n; i ++)
    {
        cin>>a>>b;
        if (tab[a] != tab[b]) wynik ++;
    }
    cout<<wynik+1;
    return 0;
}