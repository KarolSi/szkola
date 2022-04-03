#include<iostream>
#include<sstream>
#include<algorithm>


int main()
{
	int *tab, *tab1, n;
	std::cout<<"podaj x";
	std::cin >> n;
	
	tab = new int [n]; 
	tab = new int [n];
	for(int i=0;i<n;i++)
		std::cin >> tab[i] >> tab1[i];
		
	//std::sort(tab1, tab1+n);
	
	
	for (int k=0;k<n;k++)
		{
			std::cout << tab[k] << std::endl << tab1 [k] << std::endl;
			std::cout<<"hej";
	    }
	std::cout<<"ok";



  return 0;
}
