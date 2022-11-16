#include <bits/stdc++.h>
using namespace std;
string klucz;
string odp;
int wynik;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    cin>>klucz;
    cin>>odp;
    for (int i = 0; i < n; i++)
    {
        if(klucz[i]==odp[i]) wynik++;
    }
    cout<<wynik;
    return 0;
}