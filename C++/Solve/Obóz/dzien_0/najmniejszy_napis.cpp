#include<bits/stdc++.h>
using namespace std;
bool b = true;
int Pole[1002][1002];
//long long dp[1002][1002];
int n,n1=1,m1=1,m;
vector <int> wynik;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
        
    
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=m;k++)
            cin>>Pole[j][k]; //wpisanie tablicy/planszy
    }
    if(n==1 and m==1)
    {
        cout<<Pole[1][1];
        return 0;
    }   
    for( int j=1; j<=m;j++)
        Pole[n+1][j] = 1e9;

    for( int j=1; j<=n;j++)
        Pole[j][m+1] = 1e9;    

    wynik.push_back(Pole[n1][m1]);
    while(b)
    {
        
        if(Pole[n1][m1+1]<Pole[n1+1][m1])
        {
            m1+=1;
            wynik.push_back(Pole[n1][m1]);
            //cout<<Pole[n][m]<<" ";
        }
        else
        {

            n1+=1;
            wynik.push_back(Pole[n1][m1]);
            //cout<<Pole[n][m]<<" ";
        }
        if(n1==n and m1==m)
            b = false;
            
    }
    wynik.push_back(Pole[n1][m1]);
    
    for( int i=0; i<=wynik.size()-2; i++)
        cout<<wynik[i]<<" ";

    
}
