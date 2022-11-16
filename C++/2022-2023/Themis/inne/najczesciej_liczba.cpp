#include <bits/stdc++.h>
using namespace std;

pair < int, int > tab[1001];
int n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for (int i = 0; i <= 1000; i++)
    {
        tab[i].second = i;
    }
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        tab[n].first++;
    }
    
    sort(tab+1, tab+1001);
    cout<<tab[1000].second;
    
    return 0;
}