#include<iostream>
#include<sstream>

int r;

int main()
{
    std::cin>>r;
    for(int i=r; i>=-r; i--)
    {
        for(int j=-r; j<=r; j++)
        {
            if(j*j+i*i<=r*r)
            {
                std::cout<<"#";
            }
            else
            {
                std::cout<<".";
            }
        }
        std::cout<<std::endl;

    }
}
