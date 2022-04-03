#include<iostream>
#include<sstream>

int n;
int r;



int main()
{
    std::cin>>n;

    r = n%7;
    if (n==1 or n==0)
    {
        std::cout<<"NIE";
        return 0;
	}
  
    if (n==10)
    {
        std::cout<<22;
        return 0;
    }


    if (n == 4)
    {
        std::cout<<4;
        return 0;
    }
        if (n==6)
        {
            std::cout<<0;
            return 0;
        }
    
	if(r==0)  //reszta 0
	{
		for(int i=0; i<n/7; i++)
		{
			std::cout<<8;
		}
	}
    if (r==2) //reszta 2 => 1 na wyœ
	{
        std::cout<<1;
        for (int i=0; i<=(n/7)-1; i++)
        {
            std::cout<<8;
        }
    }
    if (n==3) //reszta 3 => 7 na wyœ
	{
        std::cout<<7;
        return 0;
    }
    if (r==3)
    {
    	if(n>=17)
    	{
    		std::cout<<200;
    		for (int j=0; j<=(n/7)-3; j++)
    		{
    			std::cout<<8;
    			
			}
			return 0;
		}
		else
		{
		
        	std::cout<<20;
        	for(int i=0; i<=(n/7)-2; i++)
        	{
            	std::cout<<8;
        	}
        	return 0;
    	}
    }
    
    if (r==4) //reszta 4 => 4 na wyœ
    {
        std::cout<<20;
        for (int i=0; i<=(n/7)-2; i++)
        {
            std::cout<<8;
        }
    } 
    if (r==5) //reszta 5 => 2 na wyœ
    {
        std::cout<<2;
        for (int i=0; i<=(n/7)-1; i++)
        {
            std::cout<<8;
        }
    }
	if (r==6) //reszta 6 => 6 na wyœ
    {
        std::cout<<6;
        for (int i=0; i<=(n/7)-1; i++)
        {
            std::cout<<8;
        }
    }
    if (r==1) //reszta 1 => 10 ma wys
    {
        std::cout<<10;
        for (int i=0; i<=(n/7)-2; i++)
        {
            std::cout<<8;
        }
    }

}
