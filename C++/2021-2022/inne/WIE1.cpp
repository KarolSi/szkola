#include<bits/stdc++.h>
int d1;
int d2;
long long suma1=0;
long long suma2=0;
int klocki=0;
int w1[200000];
int w2[200000];
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
    
    std::cin>>d1>>d2;

    for (int i=0; i<=d1-1; i++)     //wczytanie wiezy 1
    {
        std::cin>>w1[i];
        suma1+=w1[i];

    }
    for (int i=0; i<=d2-1; i++)     //wcytanie wiezy2
    {
        std::cin>>w2[i];
        suma2+=w2[i];
    }
    d2-=1;
    d1-=1;;
    while(suma1!=suma2)
    {
        if(suma1<suma2)  //zmniejszanie wiezy 2
        {
            suma2 = suma2 - w2[d2];
            d2-=1;
            klocki+=1;
        }
        if(suma2<suma1)     //zmniejszanie wiezy 1
        {
            suma1 = suma1 - w1[d1];
            d1-=1;
            klocki+=1;
        }
    }
    std::cout<<klocki;
}
