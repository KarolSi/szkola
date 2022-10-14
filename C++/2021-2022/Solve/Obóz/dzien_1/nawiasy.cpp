#include <bits/stdc++.h>
using namespace std;

long long n, w=0;
pair<int, int> cena[3002];
string wynik;
long long dp[3002][3002];

int main()
{
    ios::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        cin>>cena[i].first>>cena[i].second;        //wczytanie cen
    }
    for( int j=0; j<=n;j++)
    {
        dp[j][0] = 1e13; 
        dp[j][n+1] = 1e13;
    } //mur kolczasty
    for(int i=2; i<=n;i++)
    {
        dp[0][i] = 1e13;
    }
    
    for(int i=1; i<=n;i++)
    {
        for (int j=1; j<=n; j++)
        {
            dp[i][j] = min(dp[i-1][j-1]+cena[i].first, dp[i-1][j+1]+cena[i].second);
        }

    }

    int w=1;
    for(int i = n; i>0; i--)
    {
        if(w!=1 and dp[i-1][w-1]+cena[i].first<dp[i-1][w+1]+cena[i].second)
        {
            w--;
            wynik = "(" + wynik;
        }
        else
        {
            w++;
            wynik = ")"+ wynik;
        }
    }

    cout<<dp[n][1]<<" "<<wynik;

    return 0;

}