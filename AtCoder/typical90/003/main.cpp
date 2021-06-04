#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n;
map<ll, ll> fp;
vector<vector<ll>> g;

ll ans = -1;

ll dfs(ll node) {
    priority_queue<ll> q;
    for (auto x : g[node]) {
        if (fp.count(x)) continue;
        fp[x]++;
        q.push(dfs(x));
    }
    ll top = 0;
    ll sec = 0;

    if (!q.empty()) top = q.top(), q.pop();
    if (!q.empty()) sec = q.top(), q.pop();

    ans = max(ans, top + sec + 1);

    return max(top, sec) + 1;
}

ll find_edge() {
    ll edge = -1;
    rep(i, 0, n + 1) {
        if (g[i].size() == 1) {
            edge = i;
            return edge;
        }
    }
    return -1;
}

int main() {
    cin >> n;
    g = vector<vector<ll>>(n + 1);

    rep(i, 0, n - 1) {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    ll start = find_edge();
    dfs(start);

    put(ans);
}
