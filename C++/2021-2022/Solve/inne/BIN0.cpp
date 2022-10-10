#include <bits/stdc++.h>
using namespace std;

 
 
void konwersja(long long a, string &b)
{
    for(; a>=1; a/=2)
    {
        if(a%2==0)
            b.push_back('0');
        else
            b.push_back('1');
    }
    
    reverse(b.begin(), b.end());
}
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
	long long n;
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin >> n;
        string binarnie;
        konwersja(n, binarnie);
        cout << binarnie << "\n";
    }
    
    
    
    return 0;
}
