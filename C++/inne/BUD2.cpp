
#include<iostream>                                     
#include<sstream>
#include<algorithm>
int n;
int h;
int m = 0;


int main()
{
    std::cin>>n;                     //wczytanie liczby wiezowców
    int bud[n];                      //inicjacja tablicy 
    for (int i = 0; i<n; i++)       //zapisanie tablicy
    {
        std::cin>>bud[i];            // nawiêksza h (m)
        if (m < bud[i])
            m = bud[i];
    }
    for(int j=m-1; j>=0; j--)             //wysokoœæ rys
    {
        for (int i=0; i<=n-1; i++)        //pojedyñczy rz¹d
        {
            if (bud[i]<m)
            {
              std::cout<<".";
            }
            else
            {
                std::cout<<"#";
            }
    
        }
        std::cout<<std::endl;
        m-=1;
    }
}
