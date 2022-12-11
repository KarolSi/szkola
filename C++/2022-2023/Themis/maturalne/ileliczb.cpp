#include <bits/stdc++.h>
using namespace std;
int n; 
int wynik = 0;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    if (n==0)
    {
        cout<<1;
        return 0;
    }
    while(n!=0)
    {
        n/=10;
        wynik++;
    }
    cout<<wynik;
    return 0;
}