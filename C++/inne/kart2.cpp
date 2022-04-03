#include<iostream>
#include<sstream>

int m;
int n;
int n1;
int m2;
int main()
{
	std::cin >> n >> m;
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			std::cout << i*j << " " ;  
		}
		std::cout << std::endl;
	}
}
