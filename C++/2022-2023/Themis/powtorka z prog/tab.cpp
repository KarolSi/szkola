#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int tab[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin>>tab[i];
    }
    int q;
    cin>>q;
    int z;
    for (int i = 0; i < q; i++)
    {
        cin>>z;
        cout<<tab[z]<<"\n";
    }
    return 0;
}
