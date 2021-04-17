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
    vector<ll> a(n), b(n);

    rep(i, 0, n) {
        ll x, y;
        cin >> x >> y;
        a[i] = x + y;
        b[i] = x - y;
    }

    sort(all(a));
    sort(all(b));

    put(max(a[n - 1] - a[0], b[n - 1] - b[0]));
}
