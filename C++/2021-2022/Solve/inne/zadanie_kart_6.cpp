#include <bits/stdc++.h>
using namespace std;
const int SIZE = 1100000;
bool DP[SIZE][3];
bool arr[SIZE];
int n, a, b, c, d, res;
int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n>>a>>b>>c>>d, DP[1][0]=1;
	for(int i=1;i<=n;i++)	cin>>arr[i];
	for(int i=1;i<=n;i++)
		if(!arr[i]){
			if(i>=a && DP[i-a][0])	DP[i][0]=1;
			if(i>=b && DP[i-b][0])	DP[i][0]=1;
			
			if(i>=a && DP[i-a][1])	DP[i][1]=1;
			if(i>=b && DP[i-b][1])	DP[i][1]=1;
			if(i>=c && DP[i-c][0])	DP[i][1]=1;
			
			if(i>=a && DP[i-a][2])	DP[i][2]=1;
			if(i>=b && DP[i-b][2])	DP[i][2]=1;
			if(i>=d && DP[i-d][1])	DP[i][2]=1;
			
			if(DP[i][0] or DP[i][1] or DP[i][2])
				res=i;
		}
		cout<<res<<endl;
}