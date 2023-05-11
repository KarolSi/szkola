#include <bits/stdc++.h>
using namespace std;
int tab1[10];
int tab2[10];
int n,m;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    
    while (n>0)
    {
        tab1[n%10] = 1;
        n/=10;
    }
    while(m>0)
    {
        tab2[m%10] = 1;
        m/=10;
    }
    /*
    cout<<"[ ";
    for (int i = 0; i <10; i++)
    {
        cout<<tab1[i]<<", ";
    }
    cout<<"] \n[ ";
    for (int i = 0; i <10; i++)
    {
        cout<<tab2[i]<<", ";
    }
    cout<<"] \n";*/
    for(int i = 0; i<10;i++)
    {
        if (tab1[i]==tab2[i]) continue;
        if(tab1[i]!=tab2[i])
        {
            cout<<"NIE\n";
            return 0;
        }
    }
    cout<<"TAK\n";
    
    return 0;
}