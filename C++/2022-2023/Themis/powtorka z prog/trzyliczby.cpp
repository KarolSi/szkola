#include <bits/stdc++.h>
using namespace std;
int tab[3];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin>>tab[0];
    cin>>tab[1];
    cin>>tab[2];
    sort(tab, tab+3);
    cout<<tab[2];
    return 0;
}