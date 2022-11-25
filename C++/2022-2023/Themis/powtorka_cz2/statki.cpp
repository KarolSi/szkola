#include <bits/stdc++.h>
using namespace std;
int n,x,y;
int p[11][11];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        p[x][y] = 1;
    }
    for (int i = 1; i <= 8; i++)
    {
        for (int j=1; j <= 8;j++)  
        {
            if(p[i][j]==1)
                cout<<'X';
            else cout<<'.';
            
        }
        cout<<"\n";
    }
    return 0;
}