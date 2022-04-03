 #include <bits/stdc++.h>
using namespace std;

int dp[100010];
int n;
pair <int, int> partie[310];
vector <int> v;
int w;
int suma;
bool b(pair <int, int> a, pair <int, int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin>>n;


    

    for(int i = 1; i <= n; i++)         //wczytanie nr prtii i jej ilości miejsxc
    {
        cin>>partie[i].first;
        partie[i].second = i;
        suma+=partie[i].first;
    }

    sort(partie + 1, partie + n + 1);
    //reverse(partie + 1, partie + n + 1);
    for (int i = 1; i <= suma; i++)
        dp[i] = 1e9;
    
    for (int i = n; i > 0; i--) 
    {
        for (int j = (suma/2); j >= 0; j--)
        {
            
            if(dp[j]!=1e9 and dp[j + partie[i].first] == 1e9)
            {
                dp[j + partie[i].first] = partie[i].second;
                
                
            }    
        }
        
    }
    for (int i = suma ; i > (suma/2); i--)
    {
        if(dp[i] != 1e9)
        {
            w = i;
           cout<<i;
           break;
        }
    }
    sort(partie + 1, partie + n + 1, b);
    while(w!=0)
    {
        v.push_back(dp[w]);
        w -= partie[dp[w]].first;
    }
    cout<<"\n"<<v.size()<<"\n";
    for (int i = 0; i <= v.size()-1; i++)
    {
        cout<<v[i]<<" ";
        
    }


    return 0;
}