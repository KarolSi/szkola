#include <bits/stdc++.h>
using namespace std;
int n,wynik,z;
int silnia(int a)
{
    int w = 1;
    for (int i = 1; i <= a; i++)
    {
        w*=i;
    }
    return w;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    z = n;
    while(z>0)
    {
        wynik+=silnia(z%10);
        z/=10;
    }
    if(wynik==n) cout<<"TAK\n";
    if(wynik!=n) cout<<"NIE\n";
    return 0;
}