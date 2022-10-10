#include <bits/stdc++.h>
using namespace std;

vector <int> pierwsze;
int czy_pierwsza[3000000];

void sito(int a, int b)
{
	for(long long i=2;i<=b;i++)
	{
		if(czy_pierwsza[i]==1)
            continue;
		
        pierwsze.push_back(i);
        //cout<<i<<"\n";
        for(long long j=i*i;j<=b;j+=i)
			czy_pierwsza[j]=1;
	}
}
int sumowanie(int a)
{
    int suma = 0;
    while(a>=1)
    {
        suma+=a%10;
        a = a/10;
    }
    return suma;
}


int bin(int a)
{
    int bsuma;
    for(; a>=1; a/=2)
    {
        if(a%2==0)
            bsuma+=0;
        else
            bsuma++;
    }
    
    return bsuma;
}


int main()
{
	
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, wynik, m;
    
	cin>>n>>m;
    sito(n,m);
	pierwsze.push_back(1000001);
    
    int i = 0;
	while(pierwsze[i]<m)
	{
        if(pierwsze[i]>n)
        {
            bool b1 = false;
            bool b2 = false;
            int p1 = sumowanie(pierwsze[i]);
            //cout<<p1<<" "<<pierwsze[i]<<"\n";
            int p2 = bin(pierwsze[i]);
            int j=0;
            while( pierwsze[j] <= pierwsze[i])
            {
                if(pierwsze[j]==p1)
                    b1 = true;
                if(pierwsze[j]==p2)
                    b2 = true;
                j++;
            }
            if(b1==true and b2==true)
            {
                wynik++;
                //cout<<wynik<<" "<<pierwsze[i]<<"\n";
            }

        }
        i++;
    }
    cout<<wynik;
	return 0;
}
