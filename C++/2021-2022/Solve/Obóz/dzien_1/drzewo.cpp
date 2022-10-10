#include <bits/stdc++.h>
using namespace std;

long long n;
string wynik;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            wynik+="L";
            
        }   
        else
        {
            n--;
            n=n/2;
            wynik+="P";
        }
    }
    for(int i=wynik.size()-1; i>=0;i--)
        cout<<wynik[i];
    
}