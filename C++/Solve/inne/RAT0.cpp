#include <bits/stdc++.h>
using namespace std;
int n, dol = 0, passa = 1,passan=0, o;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>o;
        if(dol<o)
        {
            dol = o;
            passa ++;
        }
        else
        {
            dol = 0;
            if(passa>passan)
                passan = passa;
            passa = 0;
        }
    }
    //if(passa>passan)
      //  passan = passa;
    cout<<passan;
}