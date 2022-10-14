#include <iostream>
using namespace std;
#define int long long
int n,w,k;
const int SIZE =1e6+2;
int tab[SIZE];



int Find(int x){
	
    if(tab[x]==x){
        return x;
    }else tab[x]=Find(tab[x]);
    return tab[x];
}

void Union(int a, int b){
    tab[Find(a)]=Find(b);
}	
auto main() -> int32_t
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	n=1; 
	
	for(int i=0; i<n; i++){
		cin>>w>>k;
		
		for(int i=0; i<w; i++){
			tab[i]=i;
		}
		int x=w;
		
		for(int i=0; i<k; i++){
		int a, b;
		cin>>a>>b;
		if(Find(a)!=Find(b)){
			x--, Union(a, b);
		
		}
		
		}
		if(x>1){
		      cout<<"NIE\n";
			
		}
        else if (w==k) cout<<"TAK\n";
		else
        {
            cout<<"NIE\n";
        }
		
			
 	}
	
}