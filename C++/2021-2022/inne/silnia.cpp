#include <bits/stdc++.h>
using namespace std;

long long sil(int n)
{
    if(n<2)
        return 1;
    
    return n*sil(n-1);
    
}

/*

long long silnia(int n)
{
 if(n<2)
        return 1; //silnia z 0 i 1 wynosi 1

return n*silnia(n-1); //wywołanie funkcji przez samą siebie ze zmniejszonym argumentem
}
*/
int main()
{
 int n;
 
 cout<<"Podaj liczbę: ";
 cin>>n;
 cout<<"n! = "<<sil(n)<<endl;

 system("pause");
 return 0;
}