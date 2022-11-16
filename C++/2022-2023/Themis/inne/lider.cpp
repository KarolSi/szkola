#include <bits/stdc++.h>
using namespace std;
long long tab[500005];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        long long n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>tab[j];
        }
        
        int m = 1, max=0,l,lmax;
        for (long long j = 0; j < n; j++)
        {
            if(tab[j+1]==tab[j])
            {
                m++;
            }
            else
            {
                
                if(m>=max)
                {
                    lmax = tab[j];
                    max = m;
                    m=1;
                }
            }


        }
        
        if(max>n/2) cout<<lmax<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}