#include <bits/stdc++.h>
using namespace std;

int q, dl, k;
int pary, sieroty, wynik;  
int m[26];
string napis;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        for(int i = 0; i < 26; i++)
            m[i] = 0;
        pary = 0;
        sieroty = 0;
        wynik = 0;

        cin>>dl>>k;
        
        cin>>napis;
        for(auto i : napis)
            m[i-'a']++;
        for(int i = 0; i < 26; i++)
        {
            pary += (m[i]/2);
            sieroty += m[i] % 2;
        }
        wynik += (pary / k) * 2;
        sieroty += (pary % k) * 2;
        if(sieroty >= k)
            wynik++;

        cout<<wynik<<"\n";


    }
    return 0;
}