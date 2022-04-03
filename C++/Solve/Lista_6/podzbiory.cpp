#include<iostream> 
#include<vector> 
using namespace std; 
long long a; 
vector <int> v; 
void go(int n, int mn)
{ 
    if(n==0)
    {
        for(int i=0;i<=v.size()-1;i++)
        {
        cout<<v[i]<<" ";
        }
        cout <<"\n";
    }

    for(int x=mn;x<=n;x++)
    {
        v.push_back(x);
        go(n-x,x);
        v.pop_back();
    } 
}

int main()
{ 
    ios::sync_with_stdio(0); cin.tie(0),cout.tie(0); 
    cin>>a; go(a,1);
    return 0;
}