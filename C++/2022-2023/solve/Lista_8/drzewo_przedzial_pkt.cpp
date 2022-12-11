#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1 << 17;
int S[2*MAXN+1];

void update(int a, int v)
{
    a += MAXN;
    S[a] += v;
    a /= 2;
    while(a)
    {
        S[a] = S[2*a] + S[2*a+1];
        a /= 2;
    }
}

int query(int a, int b)
{
    a += MAXN, b += MAXN;
    a-- , b++;

    int out = 0;
    while(a != b)
    {
        if(a%2 == 0 && a+1 < b) out += S[a+1];
        if(b%2 == 1 && b+1 < b) out += S[b-1];

        a /= 2, b /= 2; 
    }


}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,q;
    cin >> n >> q;
    while(q--)
    {
        int t;
        cin>>t;

        if(t == 1)
        {
            int a, v;
            cin>>a>>v;
            update(a,v);

        }
        else 
        {
            int a,b;
            cin>>a>>b;
            cout<<querry(a,b)<<'\n';
        }
    }

    return 0;
}