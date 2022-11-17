#include <bits/stdc++.h>
using namespace std;
int n ,j = 1;
vector <int> parz, np;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        if(j%2==1)
        {
            np.push_back(n);
        } 
        if(j%2==0)
        {
            parz.push_back(n);
        }
        j++;
    }
    for (int i = 0; i < np.size(); i++)
    {
        cout<<np[i]<<" ";
    }
    cout<<"-1"<<"\n";
    for (int i = 0; i < parz.size(); i++)
    {
        cout<<parz[i]<<" ";
    }
    cout<<"-1";
    return 0;
}


