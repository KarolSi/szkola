#include <iostream>
using namespace std;
string gh;
int res;
int main ()
{
    cin>>gh;
    cout<<gh<<"\n";
    for(int i=0;i<gh.size();i++)    res += gh[i]-48;
    cout<<res;
}