#include<bits/stdc++.h>
int n, nr;
int tab[500000];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
    std::cin>>n;
    for (int i = 0; i<n; i++) 
    {
        std::cin>>nr;
        tab[nr]++;

    }
    for (int i=0; i<=100; i++)
    {
        if(tab[i]>0)
        {
            std::cout<<i<<" "<<tab[i]<<"\n";
        }
    }  
}
