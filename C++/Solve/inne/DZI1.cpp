#include <bits/stdc++.h>
using namespace std;
long long n, c;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(long long i=1; n/i >= sqrt(n); i++)
	{
		c+=n/i;
		
	}
	for (long long i=1; i*i<n; i++)
	{
		c+=i*((n/i)-(n/(i+1)));
		
	}
	cout<<c;
}
