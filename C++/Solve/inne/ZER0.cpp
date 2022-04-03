#include<bits/stdc++.h>
using namespace std;

int n, wynik;

int main()
{
    cin>>n;
  
    if(n==1)
        wynik = 1;

   
    if(n%3==0 and n%2!=0)
        wynik = 4;
    if(n==3)
        wynik = 3; 
    if(n==0)
        wynik = 0;

    if(n%2==0)
        wynik = 3;
    if(n==2)
        wynik = 2;
    if(n%5==0 and n%10!=0 and n!=5)
        wynik = 6;
    if(n%3!= 0 and n%2!=0 and n!=1)
        wynik = 4;
    if(n==5)
        wynik = 4;
    cout<<wynik;
}
