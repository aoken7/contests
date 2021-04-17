//pdfmita
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define debug(i) cerr << fixed << i << endl;
#define debugl(a)                      \
    for (auto x : a) cerr << x << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

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

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> p(n);
    rep(i, 0, n) cin >> p[i];
    vector<ll> x(m), y(m);
    rep(i, 0, m) cin >> x[i] >> y[i];

    UnionFind uf(n);

    rep(i, 0, m) { uf.unite(x[i], y[i]); }

    ll ans = 0;

    rep(i, 0, n) {
        if(uf.root(i+1) == uf.root(p[i])) ans++;
    }

    put(ans);
}
