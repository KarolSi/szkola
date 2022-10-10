#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    cin>>n;
    if(n==0 or n==1)
        cout<<1;
    if(n==2)
        cout<<2;
    if(n==3)
        cout<<6;
    if(n==4)
        cout<<4;
    if(n>4)
        cout<<0;
}
