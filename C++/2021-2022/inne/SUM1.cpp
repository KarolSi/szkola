#include<bits/stdc++.h>
using namespace std;
long long n;
long long ciag[500010];
long long sumypref[500010];
long long sump;
long long komb;
long long od;
long long doo;
long long wynik;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cin>>n;
    for (long long i=1; i<=n; i++)
    {
        cin>>ciag[i];
    }
    //for dla sum prefiksowych
    for(int i=1; i<=n; i++)
    {
        sump += ciag[i];
        sumypref[i] += sump;
    }
    cin>>komb;
    for (long long i=1; i<=komb; i++)
    {
        cin>>od;
        cin>>doo;
        wynik = 0;
        wynik = sumypref[doo]-sumypref[od-1];
        cout<<wynik<<"\n";
    }
}
