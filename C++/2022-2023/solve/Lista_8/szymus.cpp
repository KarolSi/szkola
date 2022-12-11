#include<bits/stdc++.h>
using namespace std;
int potega = 1<<18;
int drzewo[1000000];
int update(int index, int wartosc){
    index+=potega;
    drzewo[index]=wartosc;
    index<<=1;
    while(index>0){
        drzewo[index]=min(drzewo[index*2], drzewo[index*2]+drzewo[index*2+1]);\
        index<<=1;
    }
}
int query(int l, int p){
    l += potega; p += potega;
    int wynik = min(drzewo[p], drzewo[l]);
    while(l/2 != p/2){
        if(l % 2 == 0){wynik = min(wynik, drzewo[l + 1]);}
        if(p % 2 == 1){wynik = min(wynik, drzewo[p-1]);}
        l /= 2;
        p /= 2;
    }
}
int main(){
    int n , m, a, b;
    cin>>n>>m;
    string wyraz;
    cin>>wyraz;
    int licznik = 0;
    for(int i = 0; i < wyraz.size(); i++){
        if('(' == wyraz[i]){
            licznik++;
        }
        else{
            licznik--;
        }
        update(i + 1, licznik);
    }
    while (m --)
    {
        cin>>a>>b;s
        int przedzial = query(a, b);
        if (przedzial - drzewo[potega + a - 1] >= 0 &&
        drzewo[potega + a] - 1 == drzewo[potega + b])
        cout<<"TAK\n";
        else cout<<"NIE\n";
    }

}