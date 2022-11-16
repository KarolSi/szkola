#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    int i = 1;
    cin>>n;
    while(n)
    {
        if(i%3!=0){
            cout<<i<<" ";
            n--;
        }
        i++;
    }
    return 0;
}