#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    for(ll i = 0; powl(3,i) < n or i < 1000; i++){
        for(ll j = 0; powl(5,j) < n or j < 1000; j++){
            cout << ll(powl(3,i)) + ll(powl(5,j)) << endl;
            if(ll(powl(3,i)) + ll(powl(5,j)) == n){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}