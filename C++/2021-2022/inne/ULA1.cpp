#include<bits/stdc++.h>
long long int a, b, c, d, lk, mk;
long long dzielnik;

long long nwd(long long l1t, long long l2t)
{
   
    while (l2t>0)
    {
        //std::cout<<"AAAA"<<std::endl;
        long long r = l1t % l2t;
        l1t = l2t;
        l2t = r;

        
    }
    return l1t;
}


int main()
{
    
    std::cin>>a>>b>>c>>d;
    //std::cout<<m1<<" "<<m2<<"\n"<<l1<<" "<<l2;
    lk = (a*d+c*b);
    mk = b*d;
    //std::cout<<lk<<"\n"<<mk;
    dzielnik = nwd(lk, mk);
    std::cout<<lk/dzielnik<<" "<<mk/dzielnik;
    

}
