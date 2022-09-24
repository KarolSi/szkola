#include <bits/stdc++.h>
using namespace std;

vector<int> pierwsze;
int czy_pierwsza[3000000];

void sito()
{
	for(long long i=2;i<=1e6;i++)
	{
		if(czy_pierwsza[i]==1)
			continue;
		pierwsze.push_back(i);
		for(long long j=i*i;j<=1e6;j+=i)
			czy_pierwsza[j]=1;
	}
}
int sumowanie(int a)
{
    int suma = 0;
    while(a>1)
    {
        suma+=a%10;
        a/=10;
    }
    return suma;
}


int main()
{
	
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    sito();

	int n;
	cin>>n;
	pierwsze.push_back(1000001);

	for(int i=0;i<pierwsze.size();i++)
	{
        sumowanie(i);

	}
	return 0;
}
