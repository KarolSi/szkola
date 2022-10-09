#include <bits/stdc++.h>
using namespace std;

int wynik;
int n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while(true)
    {
        cin>>n;
        if(n==0)
        {
            cout<<wynik;
            return 0;
        }
        if(n==1)
            wynik++;
    }
    return 0;
}