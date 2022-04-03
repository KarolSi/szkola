#include<bits/stdc++.h>
using namespace std;
long long l,n,wynik=0,a=1e10,b;


int main()
{

    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    cin>>l>>n;
    a=n;
    b=n;
    for(long long i=1; i<l; i++)
    {
        cin>>n;
        if(n>a)
        {
            a=n;
            wynik=max(wynik,abs(a-b));
        }
        else if(n<b)
        {
            a=n;
            b=n;
        }
       // cout<<" "<<a<<" "<<b<<" "<<wynik<<endl;
    }
    cout<<wynik;

}
