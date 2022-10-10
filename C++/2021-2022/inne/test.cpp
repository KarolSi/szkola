#include<bits/stdc++.h>
using namespace std;
long long n, k, gora=1, dol=1;

int main()
{
    cin>>n;
    cin>>k;
    for(long long i=1; i<10; i++)
    {
        if(i%(i%k)==0)
        {
        	
            gora*=i%(i%k);
            dol*=1;
        }
        else
        {
            gora*=i;
            dol*=i%k;
        }
        cout<<i<<" ";
    }
    cout<<gora/dol;
    return 0;
}
