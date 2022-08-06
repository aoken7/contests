//解説AC
//トポロジカルソート
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, 0, m) cin >> a[i] >> b[i];

    vector<vector<ll>> g(n);
    vector<ll> deg(n);
    rep(i, 0, m) g[--a[i]].push_back(--b[i]), deg[b[i]]++;

    priority_queue<ll, vector<ll>, greater<ll>> q;
    rep(i, 0, n) if (deg[i] == 0) q.push(i);
    vector<ll> ans;
    while (!q.empty()) {
        auto top = q.top();
        q.pop();
        ans.push_back(top);
        for (ll u : g[top]) {
            deg[u]--;
            if (deg[u] == 0) q.push(u);
        }
    }

    if (ans.size() != n)
        put(-1);
    else
        for (auto x : ans) put(x + 1);
}
