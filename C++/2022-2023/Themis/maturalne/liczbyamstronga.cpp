#include <bits/stdc++.h>
using namespace std;
int n, w, p;

int pot(int a, int b)
{
    int a1 = a;
    for (int i = 1; i < b; i++)
    {
        a *= a1;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    int z = n, z1= n;
    while(z>0)
    {
        z/=10;
        p++;
    }
    int j = p;
    for (int i = 0; i < j; i++)
    {
        w = w + pot(z1%10, p);
        z1/=10;
        
    }
    
    if(w==n)
        cout<<"TAK";
    else    cout<<"NIE";

    return 0;
}