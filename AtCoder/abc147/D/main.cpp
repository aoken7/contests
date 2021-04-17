//解説観た
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    ll ans = 0;
    rep(i,0,60){
        ll x = 0;
        rep(j,0,n){
            if(a[j]>>i&1) x++;
        }
        ll now = x * (n-x) % mod;
        rep(j,0,i) now = now * 2 % mod;
        ans += now;
        ans %= mod;
    }

    put(ans);
}
