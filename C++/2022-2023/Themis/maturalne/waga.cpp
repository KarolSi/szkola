#include <bits/stdc++.h>
using namespace std;
int n,m,w;
int wynik;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    while (n>0)
    {
        m = n;
        while(m>0)
        {
            wynik+=m%10;
            m/=10;
        }
        
        n = wynik;
        w = wynik;
        wynik = 0;


    }
    cout<<w;
    
    return 0;
}