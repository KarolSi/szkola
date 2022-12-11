#include <bits/stdc++.h>
using namespace std;
int w=0;
int tab[10];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    while(n>0)
    {
        tab[n%10] = 1;
        n/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if(tab[i] == 1) w++;
    }
    cout<<w;
    return 0;
}