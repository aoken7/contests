#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n;
map<ll, ll> fp;
vector<vector<ll>> g;

struct UnionFind {
    vector<int> r;
 
    UnionFind(int N) {
        r = vector<int>(N+1, -1);
    }
 
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
 
    int size(int x) {
        return -r[root(x)];
    }
};

vector<ll> dfs(ll node) {
    if (node == n) return {n};
    if (g[node].size() < 1) return {};

    fp[node]++;

    for (auto x : g[node]) {
        if (fp.count(x)) continue;
        auto y = dfs(x);
        if (y.size() > 0) {
            y.push_back(node);
            return y;
        }
    }

    return {};
}

int main() {
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n - 1) cin >> a[i] >> b[i];

    g = vector<vector<ll>>(n + 1);

    rep(i, 0, n - 1) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    auto x = dfs(1);

    pair<ll,ll> cat1, cat2;

    cat1 = {x[x.size()/2], x[x.size()/2-1]};
    cat2 = {x[x.size()/2-1], x[x.size()/2]};

    UnionFind UF(n);

    rep(i,0,n-1){
        if(a[i] == cat1.first and b[i] == cat1.second or a[i] == cat2.first and b[i] == cat2.second){
            continue;
        }
        UF.unite(a[i], b[i]);
    }

    if(UF.size(1) > UF.size(n)){
        put("Fennec");
    }else{
        put("Snuke");
    }
}
