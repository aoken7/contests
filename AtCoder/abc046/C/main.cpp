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

int main() {
    ll n;
    cin >> n;
    vector<ll> t(n), a(n);
    rep(i, 0, n) cin >> t[i] >> a[i];

    ll takahasi = 1;
    ll aoki = 1;
    rep(i, 0, n) {
        ll x = max((takahasi + t[i] - 1) / t[i], (aoki + a[i] - 1) / a[i]);
        takahasi = x * t[i];
        aoki = x * a[i];
    }
    put(takahasi + aoki);
}
