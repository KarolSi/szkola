#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    int wynik = 0;

    for (int i = 0; i < (1<<n); i++)
    {
        int x = 0;
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j ))
            {
                x = x ^ a[j];
            }
        }
        wynik += x;
    }
    cout<<wynik<<"\n";
    return 0;
}