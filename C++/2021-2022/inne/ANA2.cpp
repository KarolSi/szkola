#include<bits/stdc++.h>
std::string wiad;
std::string zapyt;
int alf[27];
int zapytania[27]; //tablica alfabetu
int n; 
bool b;
int main()
{
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
    std::cin>>wiad;
    std::cin>>n;     //wczytuje wiad do anagramy
    for (int i = 0; i<wiad.size(); i++) 
    {
        alf[wiad[i]-'a'] ++;
    }
    for (int i=0; i<n; i++)//g�owna p�tla 
    {
        std::cin>>zapyt;
        for(int j=0; j<26; j++)
        {
            zapytania[j]=0;
        }
        b = 1;
        for (int j = 0; j<zapyt.size(); j++) 
        {
            zapytania[zapyt[j]-'a'] ++;
        }
        for(int k=0; k<26; k++)
        {
            if(zapytania[k]==alf[k])
            {
                b = 1;
            }
            else
            {
                b = 0;
                break;
            }
            
        }
        if (b==1)
        {
            std::cout<<"TAK"<<"\n";
        }
        else
        {
            std::cout<<"NIE"<<"\n";
        }

    }
    
    
}
