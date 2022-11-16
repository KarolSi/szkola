#include <bits/stdc++.h>
using namespace std;

int n;
int tab[1000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>tab[i];
    }
    sort(tab+1, tab+n+1);
    for (int i =1; i <= n; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}