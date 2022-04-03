#include<iostream>
#include<vector>
using namespace std;
vector<int> pierwsze;
int czy_pierwsza[3000000];
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
	//cin.tie(0);
	//cout.tie(0);
	//ios_base::sync_with_stdio(0);
	sito();
	int n;
	cin>>n;
	pierwsze.push_back(1000001);
	for(int i=0;i<pierwsze.size();i++)
	{
		if(pierwsze[i]>n)
		{cout<<i;
		break;
		}
	}
	return 0;
}
