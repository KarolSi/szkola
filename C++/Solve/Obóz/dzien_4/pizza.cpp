#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int n, w = 1; //lewy wsakżnik pizzy
int piz[1000002];
unordered_set <int> s;
int wynik = 0;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>piz[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if(s.count(piz[i]))
        {
            while(piz[w]!=piz[i])
            {
                s.erase(piz[w]);
                w++;
            }
            w++;
        
        }
        s.insert(piz[i]);
        wynik = max(i-w+1, wynik);
    }    
    
    cout<<wynik;
    return 0;
}
/*
unordered_set <int> S;
---
int a;
S.insert(a); - wpisuje a do S
S.count(a) - sprawdza, czy a jest w S
S.erase(a) - usuwa a z S (jezeli w nim w ogle jest)
*/