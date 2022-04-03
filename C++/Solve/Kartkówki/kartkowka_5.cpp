#include <bits/stdc++.h>
using namespace std;
int END=10000000, e, f, n, k, a, b, R;
vector <pair<int, int> > S;
int  DP[100001];
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>e>>f>>n, R=f-e;
	for(int i=0; i<n; i++)	cin>>a>>b, S.push_back({a, b});
	for(int i=1; i<=R; i++)	DP[i]=END;
	for(int i=1; i<=R; i++)
		for(auto x : S)
			if(x.second<=i)
				DP[i]=min(DP[i], DP[i-x.second]+x.first);
	if(DP[R]!=END)	cout<<DP[R];
	else			cout<<"NIE\n";
}