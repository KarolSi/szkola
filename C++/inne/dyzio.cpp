#include<bits/stdc++.h>
using namespace std;
vector<int> pierwsze;
bool czy_pierwsza[1000010];
int n;
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
    cin>>n;
    sito();
    for(int i=0; i<n; i++)
    {
        cin>>od;
        cin>>doo;
        int j=0;
        while(doo>=pierwsze[j])
        {
            if(pierwsze[j]>=od)//sprawdza czy jest wiekse od początu pzedziału
            {
                wynik ++;
                //if(pierwsze[j]<=doo)//sprawdza czy jest mniejze o końca przedziału
                    //wynik++;
            
            }
            j++;
            
        }
        cout<<wynik<<"\n";
        wynik=0;

    }
    
    

}
