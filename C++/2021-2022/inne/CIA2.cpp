#include<bits/stdc++.h>
long long n;
long long q;
int t[1000001];
int ciag;


int main()
{
    for(int i=0; i<=1000000-1; i++)
    {
        t[i] = -1;
    }
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);

    std::cin>>n>>q;
    for(int i = 1; i<=n; i++)
    {
        std::cin>>ciag;
        if(t[ciag] == -1) //zo³ta³a zapisana ta liczba
        {
        t[ciag] = i;
        }

    }
    for(int i=0; i<=q-1; i++)
    {
        std::cin>>ciag;
        if(t[ciag]>-1)      //czy dana linijka jest zapisana
        {
            std::cout<<t[ciag];
            std::cout<<"\n";
        }
        else
        {
            std::cout<<"NIE";
            std::cout<<"\n";
        }
    }

}
