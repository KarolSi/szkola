#include<bits/stdc++.h>
using namespace std;
long long n;
double tabn[16] = {0.00,0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1, 2, 5, 10, 20, 50, 100, 200, 500};
int main()
{
    double wynik;
    cin>>n;
    for (int i=15; i>=0; i--)
    {
        wynik += n%10*tabn[i];
        n/=10;
    }
    cout<<wynik;
}
