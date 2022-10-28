#include <bits/stdc++.h>
using namespace std;

const long long  MOD = 1e9+9;
const long long  MAX = 1000002;

long long silnia[MAX];


long long pow(long long a, long long b)
{
    if(!b) return 1;
    if(b%2) return (a*pow(a, b-1))%MOD;
    return pow((a*a)%MOD, b/2)%MOD;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long q,k,n,wynik;
    silnia[0] =  1;
    for (long long  i = 1; i < MAX; i++)
    {
        silnia[i] = (silnia[i-1]*i)%MOD;
    }
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        wynik = pow((silnia[k]*(silnia[n-k]))%MOD,MOD-2)%MOD;
        wynik *= silnia[n];
        wynik%=MOD;
        cout<<wynik<<"\n";
    }
    
    return 0;
}