#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int tab[n+2];
    for (int i = 0; i < n; i++)
    {
        cin>>tab[i];
    }
    cin>>n;
    cout<<tab[n];
    return 0;
}