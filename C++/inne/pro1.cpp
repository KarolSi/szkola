#include<iostream>
#include<sstream>

long long s=0;
long long n;
long long doc;

int main()
{
    std::cin>>n;
    doc = n;
    for(int i=0; i<=1000; i++)
    {
        s = 0;
    	while(n>0)
        {
            s = s + (n%10)*(n%10);
            n = n/10;
            
        }
        n = s;
    	if(n<doc)
            {
                doc=n;
            }
    }        
    std::cout<<doc;
    
}
