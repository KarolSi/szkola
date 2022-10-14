#include<bits/stdc++.h>
using namespace std;
long long n, m;

bool pierw(long long a)
{
  for (long long i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
        return 0;
    }
  }
  return 1;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
    long long pier = 0;
    cin>>m;
    for(long long i=0; i<m; i++)
    {
        cin>>n;
        if(n==0 or n==1)
        {
            cout<<"NIE"<<"\n";
            continue;
        }
        pier=sqrt(n);
        if(pier*pier<n)
            pier++;
        if(pier*pier!=n)
        {
            cout<<"NIE\n";
            continue;
        }
        long long pier2=sqrt(pier);
        if(pier2*pier2<pier)
            pier2++;
        if(pier2*pier2!=pier)
        {
            cout<<"NIE\n";
            continue;
        }
        if(pierw(pier2))
        {
            cout<<"TAK"<<"\n";
        }
        else
        {
            cout<<"NIE"<<"\n";
        }

    }
}
