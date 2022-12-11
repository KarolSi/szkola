#include <bits/stdc++.h>
using namespace std;
int n;
int a,b;
bool c = true;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    while (n>0)
    {
        a = n%10;
        n /= 10; 
        b = n%10;
        
        if(a-b>0)
            c = true;
        else
        {
            cout<<"NIE";
            return 0;
        }
    }
    cout<<"TAK";
    
    return 0;
}