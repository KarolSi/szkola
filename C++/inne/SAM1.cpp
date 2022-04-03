
#include<iostream>                                     
#include<sstream>
long long n;
long long sam;
long long czarne = 0;
long long wynik = 0;
int main()
{
    std::cin>>n;
    for (int i = 0; i<n; i++)
    {
        std::cin>>sam;
        if(sam==0)
        {
            czarne += 1;
        }
        if(sam==1)
        {
            wynik = wynik + czarne;
        }
    }
  //  if (sam==0)
  //      wynik = wynik + czarne;
    std::cout<<wynik;
}
