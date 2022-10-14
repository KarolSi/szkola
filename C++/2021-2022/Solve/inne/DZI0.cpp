#include<bits/stdc++.h>
using namespace std;
long long n;

vector<long long> dzielniki(long long a) {
  vector<long long> wynik;
  long long c=0;
  for (long long i = 1; i <= sqrt(a); i++) {
    if (a % i == 0) {
      wynik.push_back(i);
      cout<<wynik[c]<<" ";
      c++;
    }
  }
  for (long long i = wynik.size() - 1; i >= 0; i--) {
    if (a / wynik[i] != wynik[i]) {
      wynik.push_back(a / wynik[i]);
      cout<<wynik[c]<<" ";
      c++;
    }
  }
  return wynik;
}

int main()
{
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
    cin>>n;
    dzielniki(n);
    
    
}
