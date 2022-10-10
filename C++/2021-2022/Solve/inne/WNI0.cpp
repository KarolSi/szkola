#include<bits/stdc++.h>
using namespace std;
long long l;
long long tabd[100004];

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    cin>>l;

    for (long long i = 0; i<l; i++ )
    {
        cin>>tabd[i];
    //    cout<<tabd[i]<<"  ";
    }
    sort(tabd, tabd+l);
    //cout<<tabd[l-1];
    
    cout<<tabd[l-1]*tabd[0];
}
