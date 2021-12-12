#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> g(n + 1);

    rep(i, 0, m) {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    ll mod = 1e9 + 7;

    //{距離，合計}
    vector<pair<ll, ll>> memo(n + 1, {1e18, 0});
    queue<ll> q;
    q.push(1);
    memo[1] = {0, 1};
    while (!q.empty()) {
        auto top = q.front();
        q.pop();
        for (auto x : g[top]) {
            if (memo[x].first == 1e18) {
                q.push(x);
                memo[x] = {memo[top].first + 1, memo[top].second};
            } else if (memo[x].first > memo[top].first + 1) {
                q.push(x);
                memo[x] = {memo[top].first, memo[top].second};
            } else if (memo[x].first == memo[top].first + 1) {
                // q.push(x);
                memo[x] = {memo[top].first + 1,
                           (memo[x].second + memo[top].second) % mod};
            }
        }
    }

    put(memo[n].second);

    // for (auto x : memo )cout << "(" << x.first << "," << x.second << ")" <<
    // endl;
}
