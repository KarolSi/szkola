#include<bits/stdc++.h>
using namespace std;

int Pole[1002][1002];
long long dp[1002][1002];
long long cow;
int q,n,m;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>n>>m;
        for(int j=1; j<=m;j++)
            dp[n+1][j] = 1e18;

        for(int j=1; j<=m;j++)
            dp[0][j] = 1e18;

        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=m;k++)
                cin>>Pole[j][k];
        }

        for(int j=1;j<=n;j++)
            dp[j][1] = Pole[j][1];
        

        for(int j=2; j<=m; j++)
        {
            for(int k=1; k<=n;k++)
            {
                dp[k][j] = Pole[k][j]+min({dp[k-1][j-1], dp[k][j-1], dp[k+1][j-1]});
            }
        }
        
        cow = 1e18;

        for(int j=1;j<=n;j++)
        {
            if(dp[j][m]<cow)
                cow = dp[j][m];
        }

        cout<<cow<<"\n";
    }
}
