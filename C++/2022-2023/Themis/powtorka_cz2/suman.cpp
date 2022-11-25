#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    int m;
    int wynik = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        wynik+=m;
    }
    cout<<wynik;
    return 0;
}