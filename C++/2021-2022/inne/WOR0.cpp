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
    
    for (int i = 1; i<=n; i++)//wk³adanie do worków
    {
        cin>>x;
        tabvec[x].push_back(i);//do x worka element i

    }
    for (int i = 1; i<=m; i++)//wyswietlanie któego worka
    {
        for (int j=0; j<tabvec[i].size(); j++)//wyswietlanie odpowiednich elementó
        {
            cout<<tabvec[i][j]<<" ";
        }
        cout<<"\n";
    }

}



