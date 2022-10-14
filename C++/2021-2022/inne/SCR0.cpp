#include<bits/stdc++.h>

std::string literki;
int alf[26];

int main()
{
    std::cin>>literki;
    for (int i=0; i<literki.size(); i++)  //wystêpowanie liter
    {
        alf[literki[i]-'a']++;
    }
    
    for (int i=0; i<26; i++)
    {
        for(int j=0; j< alf[i]/2; j++)
        {
            char z = i+'a';
            std::cout<<z;
        }

    }
    for(int i=0; i < 26; i++)
    {
        if(alf[i]%2==1)
        {
            char z = i+'a';
            std::cout<<z;
            break;
        }
    }
    for (int i=25; i>=0; i--)
    {
        for(int j=0; j < alf[i]/2; j++)
        {
            char z = i + 'a';
            std::cout<<z;  
        } 

        
    }

}

