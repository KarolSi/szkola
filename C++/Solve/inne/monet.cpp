#include<bits/stdc++.h>
using namespace std;

long long nomi[1000];
long long dp[10003];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin>>n;
    for(int i=0; i<n; i++) cin >> nomi[i];
    cin >> s;

    for(int i = 1; i<=s; i++)
    {
        long long mini = 1000000;
        {
            for (int j =0; j<n; j++)
            {
                if(i-nomi[j] < 0) continue;
                mini = min(mini, dp[i-nomi[j]]+1);
            }
            dp[i] = mini;
        }

    }
    if(dp[s] == 1000000) cout<<"NIE";
    else cout << "TAK";

}