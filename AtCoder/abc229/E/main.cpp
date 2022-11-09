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

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> g(n+1);
    rep(i, 0, m) {
        ll a, b;
        cin >> a >> b;
        if (a < b) {
            g[a].push_back(b);
        } else {
            g[b].push_back(a);
        }
    }

    UnionFind UF(n);
    vector<ll> ans = {0};
    ll cnt = 0;
    for (ll i = n; i >= 2; i--) {
        cnt++;
        for (auto j : g[i]) {
            if (UF.root(i) != UF.root(j)) {
                UF.unite(i, j);
                cnt--;
            }
        }
        ans.push_back(cnt);
    }

    reverse(all(ans));
    for (auto x : ans) put(x);
}
