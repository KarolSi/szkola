#include<bits/stdc++.h>
using namespace std;
long n;
long long fir;
long long sec;
pair<long long, long long> tabpar[1000004];

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cin>>n;
    for (long long i = 0; i<n; i++)
    {
        cin>>fir;
        cin>>sec;
        tabpar[i].second = fir;
        tabpar[i].first = sec;
    }
    sort(tabpar, tabpar+n);
    for (long long i = 0; i<n; i++)
    {
        
        cout << tabpar[i].second << " ";
        cout << tabpar[i].first;
        cout << "\n";
    }
}
