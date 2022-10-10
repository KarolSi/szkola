#include <bits/stdc++.h>
using namespace std;

string a, b, w;
int x, y;
int DP[5002][5001];

int main()
{
    cin>>a>>b;
    a = '@' + a;
    b = '#' + b;
    x = a.size()-1;
    y = b.size()-1;
   
    for (int i=1; i<=a.size()-1; i++)
    {
        for(int j=1; j<=b.size()-1; j++)
        {
            if(a[i]==b[j])
            {
                DP[i][j] = DP[i-1][j-1]+1;
            }
            DP[i][j] = max(DP[i][j], DP[i-1][j]);
            DP[i][j] = max(DP[i][j], DP[i][j-1]);
            //cout<<DP[i][j]<<" ";
        }
        //cout<<"\n";
    }
    while (x!=0 and y!=0)
    {
        if(a[x]==b[y])
        {
            w = a[x]+w;
            x--;
            y--;

        }
        else if(DP[x-1][y]>DP[x][y-1])
            x--;
        else
            y--;
    }
    
    cout<<w;
}