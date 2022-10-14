#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    cin>>n;
    if (n%4==1)
        cout<<2;
    if (n%4==2)
        cout<<4;
    if (n%4==3)
        cout<<8;
    if (n%4==0)
        cout<<6;
    if(n==0)
        cout<<0;
}
