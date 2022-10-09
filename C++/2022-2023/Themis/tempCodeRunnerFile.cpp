#include <iostream>

using namespace std;

int t, k;

long long Fibrek(int x)
{
    if((x==1 or x==0))
    {
        return(x);
    }
    else 
    {
      return(Fibrek(x-1)+Fibrek(x-2));
    }

}

int main()
{   
    cin >> t;
    while (t--)
    { 
      cin >> k;
      cout << Fibrek(k) << "\n";
    }
}