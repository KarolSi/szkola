#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int m;
vector<int> tabvec[100005];
int main()
{
    cin>>n;
    cin>>m;
    
    for (int i = 1; i<=n; i++)//wk�adanie do work�w
    {
        cin>>x;
        tabvec[x].push_back(i);//do x worka element i

    }
    for (int i = 1; i<=m; i++)//wyswietlanie kt�ego worka
    {
        for (int j=0; j<tabvec[i].size(); j++)//wyswietlanie odpowiednich element�
        {
            cout<<tabvec[i][j]<<" ";
        }
        cout<<"\n";
    }

}



