#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    for (;;) {
        ll n, m;
        cin >> n >> m;

        if (n == 0 and m == 0) break;

        vector<vector<ll>> p(m, vector<ll>(n));
        rep(y, 0, m) rep(x, 0, n) cin >> p[y][x];

        vector<ll> sum(n, 0);

        rep(x, 0, n) rep(y, 0, m) { sum[x] += p[y][x]; }

        ll ans = *max_element(all(sum));
        put(ans);
    }
}