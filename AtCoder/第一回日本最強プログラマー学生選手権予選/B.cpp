#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll mod = 1e9+7;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    rep(i,0, n) cin >> a[i];

    ll aa = 0, d = 0;
    rep(i,0,n-1){
        rep(j,i+1,n){
            if (a[j] < a[i]) aa = (aa + 1) % mod;
        }
    }

    a.insert(a.end(), a.begin(), a.end());

    rep(i,0,a.size()-1){
        rep(j,i+1,a.size()){
            if (a[j] < a[i]) d = (d + 1) % mod;
        }
    }

    d = d - 2 * aa;
    if (d < 0) d += mod;

    ll ans = ((k * ((2 * aa % mod + ((k-1) * d) % mod) % mod) % mod) % mod) / 2;

    put(ans);
}