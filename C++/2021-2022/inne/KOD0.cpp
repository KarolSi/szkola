#include<bits/stdc++.h>
std::string s;
int t;
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);

    std::cin>>s;
    t = s.size();
    for(int i=0; i<t; i++)
    {
        if(s[i]=='a' or s[i]=='b' or s[i]=='c')
        {
            std::cout<<2;
        }
        if(s[i]=='d' or s[i]=='e' or s[i]=='f')
        {
            std::cout<<3;
        }
        if(s[i]=='g' or s[i]=='h' or s[i]=='i')
        {
            std::cout<<4;
        }
        if(s[i]=='j' or s[i]=='k' or s[i]=='l')
        {
            std::cout<<5;
        }
        if(s[i]=='m' or s[i]=='n' or s[i]=='o')
        {
            std::cout<<6;
        }
        if(s[i]=='p' or s[i]=='q' or s[i]=='r' or s[i]=='s')
        {
            std::cout<<7;
        }
        if(s[i]=='t' or s[i]=='u' or s[i]=='v')
        {
            std::cout<<8;
        }
        if(s[i]=='w' or s[i]=='x' or s[i]=='y' or s[i]=='z')
        {
            std::cout<<9;
        }
    }
}
