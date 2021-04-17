//解答観た

#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct Point {
    ll x, y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
} typedef P;

int main() {
    ll n, m, r_size;
    cin >> n >> m >> r_size;
    vector<ll> r(r_size);
    rep(i, 0, r_size) cin >> r[i];
    vector<ll> a(m), b(m), c(m);
    rep(i, 0, m) cin >> a[i] >> b[i] >> c[i];

    vector<vector<ll>> d(n, vector<ll>(n, 1e18));

    rep(i, 0, m) {
        d[a[i]-1][b[i]-1] = c[i];
        d[b[i]-1][a[i]-1] = c[i];
        //d[a[i]][a[i]] = 0;
        //d[b[i]][b[i]] = 0;
    }

    for (int k = 0; k < n; k++) {          // 経由する頂点
        for (int i = 0; i < n; i++) {      // 始点
            for (int j = 0; j < n; j++) {  // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    ll ans = 1e18;

    sort(all(r));

    do {
        ll in_ans = 0;
        rep(i, 0, r_size - 1) { in_ans += d[r[i]-1][r[i + 1]-1]; }
        ans = min(ans, in_ans);
    } while (next_permutation(all(r)));


    put(ans);
}
