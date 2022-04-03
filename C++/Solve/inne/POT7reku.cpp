#include<bits/stdc++.h>
using namespace std;
long long a, n, m;

long long reku(long long a, long long n, long long m)
{
	if(n==0)
		return 1;
	
	if(n%2 == 1) 
		return ((a%m) * (reku(a, n - 1, m)%m))%m;
	
	long long w = reku(a, n/2, m); 
	return ((w%m)*(w%m))%m;
}

int main()
{
	cin>>a>>n>>m;
	cout<<reku(a, n, m);
	
	return 0;
}