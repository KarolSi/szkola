#include<bits/stdc++.h>
std::string wiad;
std::string alfabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
std::string ALFABET = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int nr;
int dl, dl1;
int main()
{
    std::cin>>wiad;
    dl = wiad.size();
    dl1 = alfabet.size();
  //  std::cout<<dl1;
    for (int i=0; i<dl; i++)
    {
        nr = 0;
        for(int j = 0; j<dl1; j++)
        {
            if(wiad[i]==alfabet[j])
            {
                nr = j;
                nr +=13;                         //                1.150
                nr = nr%26;
                std::cout<<alfabet[nr];
            }
            else if(wiad[i]==ALFABET[j])
            {
                nr = j;
                nr +=13;
                nr = nr%26;
                std::cout<<ALFABET[nr];
            }
            if(wiad[i]>=48 and wiad[i]<= 57)
            {
                std::cout<<wiad[i];
                break;
            }
            
            
        }
    }
}

