#include <iostream>

using namespace std;

int t, k,n;

long long Fibrek(int x)
{
    int z = x;
    while(z--)
        if (x <= 1)
            return x;
        
        n = Fibrek(x-1) + Fibrek (x-2);
        
    return n;
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