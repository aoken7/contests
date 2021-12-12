#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<vector<ll>> g;
ll ans = 0;
vector<ll> flag;

void dfs(ll node) {
    if (flag[node]) return;
    flag[node] = true;
    for (auto x : g[node]) dfs(x);
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, 0, m) cin >> a[i] >> b[i];

    g = vector<vector<ll>>(n + 1);
    flag = vector<ll>(n + 1, 0);

    rep(i, 0, m) { g[a[i]].push_back(b[i]); }

    ll ans = 0;
    rep(i, 0, n) {
        flag = vector<ll>(n + 1, 0);
        dfs(i + 1);
        rep(j,0,n) if(flag[j+1]) ans++;
    }

    put(ans);
}
