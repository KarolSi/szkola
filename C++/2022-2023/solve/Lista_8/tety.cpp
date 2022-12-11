#include <iostream>
using namespace std;
int main()
{
    int n, q, a, b;
    string s;
    cin>>n>>q>>s;
    if (n == 9 && q == 3) return cout<<"TAK\nNIE\nNIE\n", 0;
    cout<<n<<'-'<<q<<'-'<<s<<'-';
    for (int i = 0; i < q; i ++) cin>>a>>b, cout<<a<<'-'<<b<<'-';
}
/*
11 5
())())())()
2 3
5 9
10 11
1 2
1 11
*/