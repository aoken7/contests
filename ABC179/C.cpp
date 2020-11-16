#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    
    ll ans = 0;

    for(ll i=1; i<n; i++){
        for(ll j=1; j<n; j++){
            if(i*j > n) break;
            if(i*j < n) ans++;
        }
    }

    put(ans);
}