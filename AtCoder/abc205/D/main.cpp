//解説見た
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> c(n + 1, 0);
    rep(i, 0, n) { c[i + 1] = a[i] - i - 1; }

    rep(i, 0, q) {
        ll k;
        cin >> k;
        if (c[n] < k) {
            ll ans = a[n - 1] + (k - c[n]);
            put(ans);
        } else {
            auto it = lower_bound(all(c), k);
            ll idx = distance(c.begin(), it);
            ll ans = (a[idx - 1] - 1) - (c[idx] - k);
            put(ans);
        }
    }
}
