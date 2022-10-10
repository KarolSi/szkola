#include<bits/stdc++.h>
using namespace std;
int n, m, low, hight;
string s;
bool b;
bool check (int x)
{
    int used = 0;
    for (int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
            i+=x-1, used++, b=1;
    }
    return used<=m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s>>m, low = 0, hight = n;
    while (low+1!=hight)
    {
        int mid=(low + hight)/2;
        if( check(mid))
            hight = mid;
        else
            low = mid;
    }
    if (!b)
        cout<<"0\n";
    else
    cout<<hight<<"\n";
    return 0;

}