#include<bits/stdc++.h>
int t;
int samo=0;
std::string s;

int main()
{
    
    std::cin>>s;
    t = s.size();
    for(int i=0; i<t; i++)
    {
        if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]== 'o' or s[i]=='u' or s[i]=='y' )
        {
            samo+=1;
        }
    }
    std::cout<<samo;
    
}
