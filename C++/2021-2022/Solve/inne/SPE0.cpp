#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    cin>>n;
    if(n>=17)
        {   
        n-=17;
        n = n/170 + 1;
        cout<<n;
    }
    else
        cout<<0;
}
