#include<bits/stdc++.h>
using namespace std;
string tab100[10]={"","sto ","dwiescie ","trzysta ","czterysta ","piecset ","szescset ","siedemset ","osiemset ","dziewiecset "};
string tab10[10]={"","dziesiec ","dwadziescia ","trzydziesci ","czterdziesci ","piecdziesiat ","szescdziesiat ","siedemndziesiat ", "osiemdziesiat ","dziewiecdziesiat "};
string tabnast[10]={"dziesiec","jedenascie ","dwanascie ","trzynascie ","czternascie ","pietnascie ","szesnascie ","siedemnascie ", "osiemnascie ","dziewietnascie "};
string tab1[10]={"","jeden ","dwa ","trzy ","cztery ","piec ","szesc ","siedem ","osiem ","dziewiec "};
long long n;

string mln[3]={"milion", "miliony", "milion�w"};
string tysi[3]={"tysiac", "tysiace", "tysiecy"};

string tysiace(int z)
{
    if(z==1)
        return tysi[1];
    if(z==2 or z==3 or z==4)
        return tysi[2];
    else
        return tysi[3]; 
}
string miliony(int y)
{
    if(y==1)
        return mln[1];
    if(y==2 or y==3 or y==4)
        return mln[2];
    else
        return mln[3]; 
}
string rozklad(int x)
{
    int jed = x%10;
    int dz = (x/10)%10;
    int set = (x/100)%10;

    if(dz==1)
    {
        return tab100[set]+tabnast[jed];
    }
    return tab100[set]+tab10[dz]+tab1[jed];
} 
int main()
{
    cin>>n;
    //Bn = 550;
    int mil = n/1000000;
    int tys = (n/1000)%1000;
    int jedn = n%1000;
    cout<<rozklad(mil)<<miliony(mil%10)<<" ";
    cout<<rozklad(tys)<<tysiace(tys%10)<<" ";
    cout<<rozklad(jedn);
}




