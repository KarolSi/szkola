#include<bits/stdc++.h>
using namespace std;
long long a, b;

int main()
{
    cin>>a>>b;
    if (a%2==0 and b%2==1 or a%2==1 and b%2==0 or a%2==0 and b%2==0)
    {
        cout<<"ALICJA";
    }
    else
    {
        cout<<"BOB";
    }
}	
