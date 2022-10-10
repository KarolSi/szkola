#include<bits/stdc++.h>
using namespace std;
long long l, n=5, wynik=0;


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    cin>>l;
    while(n<l)
    {
        wynik+=l/n;
        n*=5;
    }
    cout<<wynik;

}
