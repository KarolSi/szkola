#include<bits/stdc++.h>
using namespace std;
long long tabw[1000000];
long long n;
long long sortwoj[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        cin>>tabw[i];
        sortwoj[i]=tabw[i];
    }
    sort(sortwoj+1, sortwoj+n+1);
    int bariera = 0;
    long long suma = 0;
    for (int i = 1; i<=n; i++)
    {
        if(suma+sortwoj[i]>1e+18)
        {
            suma = (1e+18) + 1;
        }
        else 
        {
            suma+=sortwoj[i];
            if(suma<sortwoj[i+1])
                bariera=i+1;
        }

    }
    for (int i = 1; i<=n; i++)
    {
        if (tabw[i]>= sortwoj[bariera])
            cout<<i<<" ";
    }
}

