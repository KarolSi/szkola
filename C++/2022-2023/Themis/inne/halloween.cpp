#include <bits/stdc++.h>
using namespace std;

int tab[100001];
int t, n, p, k, c;
int suma;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>t>>n;
    for(int i = 1; i <=n; i++)
    {
        cin>>c;
        tab[i] = tab[i-1] + c;
    }
    for (int i = 0; i < t; i++)
    {
        cin>>p>>k;
        cout<<tab[k]-tab[p-1]<<"\n";
    }
    return 0;
}