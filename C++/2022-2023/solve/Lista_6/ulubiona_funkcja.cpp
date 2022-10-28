#include <bits/stdc++.h>
using namespace std;
long long n, P, A, wynik;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>A>>P;
        wynik = (P-A)*P+A;

        cout<<wynik<<"\n";
    }
    return 0;
}