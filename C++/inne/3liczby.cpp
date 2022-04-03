#include<iostream>
#include<sstream>
#include<algorithm>
int a;
int b;
int liczbak;
int main()
{
    std::cout<<"podaj liczby  ";
	std::cin>>a>>b;
    if (a%2==0 and b%2==0)
    {
        std::cout<<0<<std::endl<<2;
    }
    if (a%2==1 and b%2==1)
    {
        if(a==b)
        {
            std::cout<<a<<std::endl<<4;
        }
        else
        {
            std::cout<<a<<std::endl<<2;
        }
    }
    if (a%2==0 and b%2==1)
    {
        std::cout<<0<<std::endl<<1;
    }
    if (a%2 == 1 and b%2 == 0)
    {
        std::cout<<std::endl<<1;
    }

    

 	
}

