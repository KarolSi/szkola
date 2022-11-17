#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int wynik;
    int n;
    cin>>n;
    while(n>0)
    {
        wynik+=n%10;
        n/=10;
    }
    cout<<wynik<<"\n";
    return 0;
}
