//解説みて回答
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
#define vec(T) vector<T>
#define vec2(T) vector<vector<T>>
using namespace std;
using ll = long long;

void input(ll &n, ll &m, vec2(ll) & graph1, vec2(ll) & graph2) {
    cin >> n >> m;
    graph1 = graph2 = vec2(ll)(n, vec(ll)(n));

    rep(i, 0, m) {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        graph1[a][b] = graph1[b][a] = 1;
    }

    rep(i, 0, m) {
        ll c, d;
        cin >> c >> d;
        c--, d--;
        graph2[c][d] = graph2[d][c] = 1;
    }
}

bool solve(ll &n, ll &m, vec2(ll) & g1, vec2(ll) & g2) {
    vec(ll) p(n);
    iota(all(p), 0);

    ll ans = 0;
    do {
        bool ok = 1;
        rep(i, 0, n) {
            rep(j, 0, n) {
                if (g1[i][j] != g2[p[i]][p[j]]) {
                    ok = false;
                }
            }
        }
        if (ok) {
            return 1;
        }
    } while (next_permutation(all(p)));

    return 0;
}

int main() {
    ll n, m;
    vec2(ll) g1, g2;

    input(n, m, g1, g2);

    if (solve(n, m, g1, g2)) {
        put("Yes");
    } else {
        put("No");
    }
}
