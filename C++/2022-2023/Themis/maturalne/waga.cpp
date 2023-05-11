#include <bits/stdc++.h>
using namespace std;
int n,w=1;


int suma_cyfr(int m) 
{
    int wynik = 0;
        while(m>0)
        {
            wynik+=m%10;
            m/=10;
        }
    return wynik;
        
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    
    while (n>9)
    {
        n = suma_cyfr(n);
        w++;
    }
    cout<<n;
    
    return 0;
}