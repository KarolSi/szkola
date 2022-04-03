#include <bits/stdc++.h>
using namespace std;
const long long SIZE = (1e6)+2;
vector <pair <long long, long long> > Q;
long long arr[SIZE];
long long DP[SIZE];
long long n, k, x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n>>k;
    for(long long i=1; i<=n; i++ )
        cin>>arr[i];
    Q.push_back({0, 0});

    for(long long i=1; i<=n+1; i++)
    {
        if (Q[x].second<i-k) x++;
        DP[i] = Q[x].first+arr[i];
        while (Q.back().first>DP[i])
            Q.pop_back();
        Q.push_back({DP[i], i});
    }
    cout<<DP[n+1]<<"\n";
    return 0;
}

