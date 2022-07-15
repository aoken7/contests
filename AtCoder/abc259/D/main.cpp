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

struct UnionFind {
    vector<int> r;

    UnionFind(int N) { r = vector<int>(N + 1, -1); }

    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }

    int size(int x) { return -r[root(x)]; }
};

ll dis(ll x1, ll y1, ll x2, ll y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main() {
    ll n;
    cin >> n;
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    vector<ll> x(n), y(n), r(n);
    rep(i, 0, n) { cin >> x[i] >> y[i] >> r[i]; }

    ll s_idx = -1, t_idx = -1;
    rep(i, 0, n) {
        ll s_dis = dis(sx, sy, x[i], y[i]);
        ll t_dis = dis(tx, ty, x[i], y[i]);
        if (s_dis == r[i] * r[i]) s_idx = i;
        if (t_dis == r[i] * r[i]) t_idx = i;
    }

    UnionFind UF(n);

    rep(i, 0, n) {
        rep(j, i + 1, n) {
            ll dis1 = dis(x[i], y[i], x[j], y[j]);
            ll r1 = (r[i] + r[j]) * (r[i] + r[j]);
            ll r2 = (r[i] - r[j]) * (r[i] - r[j]);
            if (dis1 <= r1 and dis1 >= r2) {
                UF.unite(i, j);
            }
        }
    }

    if (s_idx == -1 or t_idx == -1)
        put("No");
    else if (UF.root(s_idx) == UF.root(t_idx))
        put("Yes");
    else
        put("No");
}
