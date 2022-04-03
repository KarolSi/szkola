#include <bits/stdc++.h>
using namespace std;

string a, b;
int DP[1002][1001];

int main()
{
    cin>>a>>b;
    a = '@' + a;
    b = '#' + b;
   
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
    cout<<a.size()+b.size()-(2*(DP[a.size()-1][b.size()-1]))-2<<"\n";
}