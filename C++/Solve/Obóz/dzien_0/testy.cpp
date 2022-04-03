#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
vector <int> V;
vector <int> T;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n * n; i ++) V.push_back(i);
    for (int i = 1; i <= n * n; i ++)
    {
        int a = rand() % V.size();
        T.push_back(V[a]);
        V.erase(V.begin() + a);
    }
    for (int i = 0; i < T.size(); i ++)
    {
        if (i % n == 0) cout<<'\n';
        cout<<T[i]<<' ';
    }
}