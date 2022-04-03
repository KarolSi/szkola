#include<bits/stdc++.h>
using namespace std;
vector<int> pierwsze;
bool czy_pierwsza[1000010];
int prefixypierwszych[1000010];
int n;
int zapytania;
int od;
int doo;
int wynik=0;


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
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
    //cin>>n;
    sito();
    pierwsze.push_back(1e6+2);
    int gdzie=0;
    for(int i=1;i<=1000000;i++)
    {
    	if(i==pierwsze[gdzie])
    	{
		
    		prefixypierwszych[i]=prefixypierwszych[i-1]+1;
			gdzie++;
    	}
    	else prefixypierwszych[i]=prefixypierwszych[i-1];
    	//cout<<prefixypierwszych[i]<<"\n";
	}
	cin>>zapytania;
	for(int i=0; i<zapytania; i++)
	{
		cin>>od>>doo;
		int pom=prefixypierwszych[doo]-prefixypierwszych[od-1];
		cout << pom<<"\n";
	}
    

}
