#include <bits/stdc++.h>
using namespace std;

long long n;

void sito()
{
    for(long long i=2;i<=1e6;i++)
	{
		//if(i>=9*1e5)
		//cout<<i<<"\n";
		if(czy_pierwsza[i]==1)
			continue;
		pierwsze.push_back(i);
		for(long long j=i*i;j<=1e6;j+=i)
			czy_pierwsza[j]=1;
	}
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    sito();
    return 0;
}