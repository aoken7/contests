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

map<ll, ll> mp;
vector<ll> st;
vector<set<ll>> g;

void dfs(ll node) {
    // if(mp.count(node)) return;
    cout << node << " ";

    st[node]++;

    // put(mp[node]);

    for (auto x : g[node]) {
        if (st[x] > 0) continue;

        dfs(x);
        cout << node << ' ';
    }

    return;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n - 1) { cin >> a[i] >> b[i]; }

    st = vector<ll>(n + 1, 0);

    g = vector<set<ll>>(n + 1);
    rep(i, 0, n - 1) {
        g[a[i]].insert(b[i]);
        g[b[i]].insert(a[i]);
    }

    dfs(1);
}
