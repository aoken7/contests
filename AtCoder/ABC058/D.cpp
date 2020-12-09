#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> x(n), y(m);
    rep(i,0,n) cin >> x[i];
    rep(i,0,m) cin >> y[i];

    ll yoko = abs(*max_element(all(x)) - *min_element(all(x)));
    ll tate = abs(*max_element(all(y)) - *min_element(all(y)));

    ll mod = 1e9+7;

    ll ans = 0;
    rep(i,0, (n-1)*(m-1)){
        ans = ans + yoko * tate % mod;
    }

    put(ans);
}