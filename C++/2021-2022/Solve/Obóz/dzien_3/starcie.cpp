#include <bits/stdc++.h>
using namespace std;
pair <long long, long long> agent;  //zdrowie atak agneta
pair <long long, long long> pokor;    // zdrowie atak koporskiego
int q;
long long ca, cp;
long long lch, bhp, bat;
bool walka(long long a, long long b)
{

    if(pokor.second%(agent.first+(a*bat))!=0)     ca = (pokor.second/(agent.first + (a*bat)) + 1);
    else                                          ca = pokor.second/(agent.first + (a*bat));
    if((agent.second+(b*bhp))%pokor.first!=0)     cp = ((agent.second + (b*bhp))/pokor.first) + 1;
    else                                          cp = (agent.second + (b*bhp))/pokor.first;
    

    if(ca<=cp)
        return true;
    else
        return false;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>agent.second>>agent.first;
        cin>>pokor.second>>pokor.first;
        cin>>lch>>bat>>bhp;
        bool b = false;
        for (int i = 0; i <= lch; i++)
        {
            if(walka(i, lch-i))
            {
                cout<<"TAK\n";
                b = 1;
                break;
            }
            
        }
        if(b==0)
            cout<<"NIE\n";
    }

    return 0;
}
