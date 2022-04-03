#include <iostream>
using namespace std;
int l;
int main(){
	cin>>l;
	cout<<l;
	while (l>1){
		if ( l%2==0){
		
			l = l/2;
			cout<<" "<<l;
		}
		else{
		
			l = 3*l+1;
			cout<<" "<<l;
		}
	 
}
		
	
}
