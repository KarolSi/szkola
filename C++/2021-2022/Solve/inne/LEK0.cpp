#include<iostream>
using namespace std;
int tabh[6];
int h, m;
char ch;

int main()
{
    cin>>h>>ch>>m;
    m+=45;
    if(m>=60)
    {
        m = m%60;
        h+=1;
    }
    if (h>=24)
        h = h%24;
    if (h>=0 && h<=9)
        cout<<0;
    cout<<h<<":";
    if(m>=0 && m<=9)
        cout<<0;
    cout<<m;

}
