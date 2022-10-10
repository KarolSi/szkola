#include <bits/stdc++.h>
using namespace std;

int n,m;
int k;
char pole[1003][1003];
int dpD[1003][1003];
int dpP[1003][1003];
int suma;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m>>k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>pole[i][j];
        }
    }
    dpD[1][1] = k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(pole[i][j]== '.')
            {
                dpP[i][j+1] = dpP[i][j];
                dpD[i+1][j] = dpD[i][j];
            }
            suma = dpP[i][j]+dpD[i][j];
            if(pole[i][j] == 'D')
            {
                dpP[i][j+1] = suma/2;
                dpD[i+1][j] = (suma+1)/2;
            }
            if(pole[i][j] == 'P') 
            {
                dpP[i][j+1] = (suma+1)/2;
                dpD[i+1][j] = suma/2;

            }
        }
    }
    cout<<dpD[n+1][m];
    

    
    
    return 0;
}
