#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    vector <int> v;
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        if(n!=0) v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}