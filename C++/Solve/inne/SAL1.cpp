#include <bits/stdc++.h>
using namespace std;
int a, b, wynik1, c, d, e, f,g, wynik2;

int main()
{
    cin>>a>>b>>c>>d>>e>>f>>g;
    if(a!=b)
        wynik1 = a*b;
    else
        wynik1 = a*c;
    if(e!=f)
        wynik2 = e*f;
    else 
        wynik2 = e*g;

    if(wynik1>wynik2)
        cout<<">";
    if(wynik1<wynik2)
        cout<<"<";
    if(wynik1==wynik2)
        cout<<"=";
}