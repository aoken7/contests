//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
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
    ll n;
    cin >> n;
    vector<tuple<int, int, int>> g;
    rep(i, 0, n - 1) {
        ll u, v, w;
        cin >> u >> v >> w;
        g.push_back({w, --u, --v});
    }

    sort(all(g));

    UnionFind UF(n);

    ll ans = 0;
    for (auto x : g) {
        ll w, u, v;
        tie(w, u, v) = x;

        ans += 1LL * UF.size(u) * UF.size(v) * w;
        UF.unite(u, v);
    }

    put(ans);
}
