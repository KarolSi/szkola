#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n%10==0) cout<<"zero";
    if(n%10==1) cout<<"jeden";
    if(n%10==2) cout<<"dwa";
    if(n%10==3) cout<<"trzy";
    if(n%10==4) cout<<"cztery";
    if(n%10==5) cout<<"piec";
    if(n%10>5) cout << "inna";
    return 0;
}