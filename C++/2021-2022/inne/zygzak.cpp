#include<iostream>
#include<sstream>
int a;

int main()
{
	std::cin>>a;
	std::cout<<"#";
	
	
	for(int i=1; i<=a/2;i++)
	{
		std::cout<<"## #";
		
	}
	if (a%2==1)
		std::cout<<"##";
    std::cout<<std::endl;
	for(int i=1; i<=a/2; i++)
	{
		std::cout<<"# # ";
	}
    std::cout<<"#";
    if(a%2==1)
        std::cout<<" #";
    std::cout<<std::endl;
	std::cout<<"#";
	for (int i=1; i<=a/2; i++)
		std::cout<<" ###";
	if (a%2==1)
		std::cout<<" #";
	
	
}
