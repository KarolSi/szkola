#include <bits/stdc++.h>
using namespace std;
int n,m;
int tab[1001];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>tab[i];
    }
    cin>>m;
    int j = m;
    cout<<tab[0]<<" ";
    while(n>j)
    {
        cout<<tab[j]<<" ";
        j += m;
    }
    return 0;
}