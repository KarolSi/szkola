#include<iostream>

using namespace std;
long long a,b,m;
long long reku(long long x)
{
    if(x==0)
        return 0;
    if(x==1)
        return a;
    if(x%2==1)
    {
        return (2*reku(x/2)+a)%m;
    }
    else{
        return (2*reku(x/2))%m;
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>a>>b>>m;
    cout<<reku(b);
    return 0;
}
