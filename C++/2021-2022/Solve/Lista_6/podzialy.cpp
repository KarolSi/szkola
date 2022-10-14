#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int a;
void go(int n, int an)
{
    if(n==0)
    {
        for(auto i: v)
            cout<<i<<" ";
        cout<<"\n";

        return;
    }
    for (int x=an; x<=n; x++)
    {
        v.push_back(x);
        go(n-x, x);
        v.pop_back();
    }
}
int main()
{
    cin>>a;
    go(a, 1);
}