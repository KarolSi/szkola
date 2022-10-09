#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1000002;
int n;
int tab[SIZE];
int a;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        tab[a]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if(tab[i]==0 or tab[i]>1)
        {
            cout<<"NIE";
            return 0;
        }
        
    }
    cout<<"TAK";
    return 0;
}