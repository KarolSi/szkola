#include<bits/stdc++.h>
int n;
int wartosci[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
std::string literki[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

void odejmowanie(int oile, std::string znak)
{
    while(n>=oile)
    {
        n-=oile;
        std::cout<<znak;
    }
}
int main()
{
    std::cin>>n;
    for (int i=0; i<13; i++)
    {
        odejmowanie(wartosci[i], literki[i]);
    }

    return 0;
}
