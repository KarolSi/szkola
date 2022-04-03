#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;

int main()
{
    cin>>a>>b>>c>>d;
    if(a==b and b==c and c==d or a==d and a!=b and b==c or a!=b and a==c and b==d or a==b and a!=c and c==d)
        cout<<"TAK";
    
   // if(a==b and a!=c and c==d)
   //     cout<<"TAK";
   // if(a!=b and a==c and b==d)
   //     cout<<"TAK";
   // if(a==d and a!=b and b==c)
  //      cout<<"TAK";
    else
        cout<<"NIE";

}