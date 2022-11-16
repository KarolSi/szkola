#include <iostream>  
using namespace std;  
int main()
{  
    int n1=0,n2=1,n3,i,number;    
    
    cin>>number;    
    for(i=2;i<=number;++i)     
    {    
        n3=n1+n2;    
           
        n1=n2;    
        n2=n3;    
    }   
    if(number == 1)
    {
        cout<<1;
        return 0;
    }
    if(number == 0)
    {
        cout<<0;
        return 0;
    }
    cout<<n3; 
    return 0;  
}  