#include <bits/stdc++.h>
using namespace std;

long long n, m, q;
long long tab[100000];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i = 0; i <= m; i++)
    {
        cin>>q;
        if(q>n)
        {
            sort(tab+1, tab+n+1);
            for (int j = 1; j <= n; j++)
            {
                tab[j] = tab[n];
                
            }
        }
        else{
            tab[q]++;
            cout<<"+";
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}