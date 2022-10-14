#include <bits/stdc++.h>
using namespace std;
const long long SIZE = (1e6)+3;
long long arr[SIZE];
long long DP[SIZE];
long long n, a, b, c,d;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n>>a>>b>>c>>d;
    for(long long i = 1; i <= n; i++)
        cin >> arr[i];


    for(long long i = 1; i <= n; i++)
        DP[i] = SIZE;

    DP[1] = 0;

    for(long long i = 2; i <= n; i++)
    {

        if(arr[i] == 0)
        {
            if(a < i)   DP[i] = min(DP[i], DP[i - a]);
            if(b < i)   DP[i] = min(DP[i], DP[i - b]);
            if(c < i)   DP[i] = min(DP[i], DP[i - c] + 1);
            if(d < i)   DP[i] = min(DP[i], DP[i - d] + 1);
        }
    }

    for(long long i = n; i >= 0; i--)
    {
        if(DP[i] <= 2)
        {
            cout << i;
            break;
        }
    }

    return 0;
}