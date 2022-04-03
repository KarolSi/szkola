#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    cin>>n;
    int wynik=0;
    while(n!=0)
    {
        wynik+=n%10;
        n/=10;
    }
    cout<<wynik;
}
