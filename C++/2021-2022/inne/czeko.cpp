#include<iostream>
#include<sstream>
#include<algorithm>
int a;
int b;
int liczbak;
int main()
{
	std::cin>>a>>b;
	if (a==1 and b==1)
	{
	
	   	std::cout<<1<<std::endl<<1;
		return 0;	
	}
    if (a%2==0 and b%2==0)
    {
        std::cout<<0<<std::endl<<2;//parzyste obie opcje
    }
    if (a%2==1 and b%2==1)
    {
        if(a==b)
        {
            std::cout<<a<<std::endl<<4;
        }
        else
        {
            if (b<a)
                std::cout<<b<<std::endl<<2;
            else
                std::cout<<a<<std::endl<<2;
        }
    }
    if (a%2==0 and b%2==1)
    {
        std::cout<<0<<std::endl<<1;
    }
    if (a%2 == 1 and b%2 == 0)
    {
        std::cout<<0<<std::endl<<1;
    }

 	
}

