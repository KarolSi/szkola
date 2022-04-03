#include<iostream>
using namespace std;
long long wynik;
void f(int n)
{
     long long a = 0, b = 1;

     for(int i=0;i<n;i++)
     {
            wynik=b;
            b += a;
            b= b%1000000007;
            a = b-a;
            a= a%1000000007;
     }
}

int main()
{
    int n;

    cin>>n;

    f(n);
    cout<<wynik;

    return 0;
}