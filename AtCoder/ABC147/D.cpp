#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll mod = 1e9+7;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll ans = 0;

    rep(i,0,n-1){
        rep(j,i+1,n){
            ans = (ans + (a[i] ^ a[j])) % mod;
            cout << (a[i] ^ a[j]) << " "; 
        } cout << endl;
    }

    ll x = a[0];

    rep(i,0,n-1){
        x = a[i] ^ a[i+1];
    }

    put((x ^ a[1]));

    //put(ans);
}