//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> l(n), r(n);
    rep(i, 0, n) cin >> l[i] >> r[i];

    vector<pair<ll, ll>> p(n);
    rep(i, 0, n) p[i] = {r[i], l[i]};

    sort(all(p));

    ll ans = 0;
    ll x = -1e18;

    for (auto [r, l] : p) {
        if (x + d - 1 < l) ans++, x = r;
    }

    put(ans);
}
