#include <bits/stdc++.h>
using namespace std;
long long n;
long long tab[1000005];
long long dp[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>tab[i];
    }
    int wynik=0;
    for(long long i=1;i<=n+1;i++){
        dp[i]=tab[i]+min(min(dp[i-1],dp[i-2]) ,dp[i-3]);
    }
    cout<<dp[n+1];
}