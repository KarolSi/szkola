#include<bits/stdc++.h>
using namespace std;
int a, b, pa, qa, pb, qb;
float polep, poletr, poletr2, wynik, sumaa, sumab, boka, bokb;
int main()
{
    cin>>a>>b>>pa>>qa>>pb>>qb;

    polep = a*b;

    sumaa = pa+qa;
    
    sumab = pb+qb;
    
    boka = a/sumaa;
    
    bokb = b/sumab; 
    
    poletr = (boka*pa)*(bokb*qb);
    
    poletr2 = (boka*qa)*(bokb*pb);
    
    wynik = polep - (poletr+poletr2);
    
    cout<<fixed<<setprecision(6)<<wynik;
}
