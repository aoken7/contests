#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<vector<ll>> g;
vector<ll> memo;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

void dfs(ll node = 1, ll cnt = 0) {
    for (auto x : g[node]) {
        if (memo[x] > -1) continue;
        memo[x] = cnt;
        dfs(x, cnt + 1);
    }
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n - 1), b(n - 1);
    rep(i, 0, n - 1) cin >> a[i] >> b[i];

    g = vector<vector<ll>>(n + 1);
    memo = vector<ll>(n + 1, -1);

    rep(i, 0, n - 1) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    dfs();

    vector<ll> odd, even;
    rep(i, 1, n + 1) {
        if (memo[i] % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    if (even.size() > odd.size()) {
        rep(i, 0, n / 2) cout << even[i] << " ";
        cout << endl;
    } else {
        rep(i, 0, n / 2) cout << odd[i] << " ";
        cout << endl;
    }
}
