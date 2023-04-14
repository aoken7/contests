#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for(long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct UnionFind {
    vector<int> r;

    UnionFind(int N) { r = vector<int>(N + 1, -1); }

    int root(int x) {
        if(r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }

    int size(int x) { return -r[root(x)]; }
};

int main() {
    ll n;
    cin >> n;
    vector<ll> p(n - 1);
    rep(i, 0, n - 1) cin >> p[i];

    ll ans = 0;
    ll top;
    ll idx = n;
    for(;;) {
        top = p[idx-2];
        ans++;
        if(top == 1) {
            put(ans);
            return 0;
        }
        idx = top;
    }
}
