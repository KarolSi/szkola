
#include <bits/stdc++.h>
using namespace std;
//----------------------------//
map <int, int> M;
vector <int> p;
vector <int> v;
int ans;
//----------------------------//
int f(int a){
    int i=1;
    while (i<a) i*=2;
    return i-a;
}
//----------------------------//
int BL(int a){
    int l=0, h=p.size();
    while(l+1!=h){
        int mid=(l+h)/2;
        if(a>=p[mid]){
            l=mid;
        }
        else{
            h=mid;
        }
    }
    return p[l];
}
//----------------------------//
int BP(int b){
    int l=0, h=p.size();
    while(l+1!=h){
        int mid=(l+h)/2;
        if(b>=p.back()-p[mid-1]){
            h=mid;
        }
        else{
            l=mid;
        }
    }
    return p.back()-p[h-1];
}
//----------------------------//
void check(int a, int b){
    int x = BL(a);
    int y = BP(b);
    int res=(a-x)+(b-y)+f(p.back()-x-y);
    //cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<res<<endl;
    ans=min(ans, res);
}
//----------------------------//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, r, x;
    cin >> r;
    for(int h=0; h<r; h++){
        M.clear(), v.clear(), p.clear();
        cin >> n;
        ans=(1<<30);
        for(int i=0; i<n; i++){
            cin >> x;
            M[x]++;
        }

        for(auto i: M){
            v.push_back(i.second);
        }
        p.push_back(0);
        for(auto i: v){
            p.push_back(i+p.back());
        }
        /*for (auto i: p)
            cout<<i<<" ";
        cout<<endl;*/
        for(int i=1; i<=n; i*=2){
            for(int j=1; j<=n; j*=2){
                check(i, j);
            }
        }
        cout << ans << "\n";
    }
}