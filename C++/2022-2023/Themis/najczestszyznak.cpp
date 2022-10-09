#include <bits/stdc++.h>
using namespace std;


string str;
int n;
vector <int>  v;
pair < int, int > tab[92];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    cin>>str;

    for (int i = 0; i < n; i++)
    {
        if(int(str[i])<=90)
        {
            tab[int(str[i])].first ++;
            tab[int(str[i])].second = int(str[i]);
        }
        else 
        {
            tab[int(str[i])-32].first++;
            tab[int(str[i])-32].second = int(str[i]-32);
        }
    }
    sort(tab+65, tab+91, greater <>());
    for (int i = 65; i <= 90; i++)  
    {
        if(tab[i].first==tab[65].first)
            v.push_back(tab[i].second);

    }
    sort(v.begin(), v.end());
    cout<<tab[65].first<<" "<<char(v.front() + 32);
    

    
    return 0;
}