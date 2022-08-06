#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

#define P pair

int main() {
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];

    vector<P<P<ll, ll>, P<ll, ll>>> lines;

    rep(i, 0, n) {
        rep(j, i+1, n) {
            if (i == j) continue;
            if (y[i] == y[j]) {
                P<ll, ll> minp = min(P{x[i], y[i]}, P{x[j], y[j]});
                P<ll, ll> maxp = max(P{x[i], y[i]}, P{x[j], y[j]});
                lines.push_back({minp, maxp});
            }
        }
    }

    ll ans = 0;

    rep(i, 0, lines.size()) {
        rep(j, i+1, lines.size()) {
            if (i == j) continue;
            if (lines[i].first.first == lines[j].first.first and
                lines[i].second.first == lines[j].second.first) ans++;
        }
    }

    put(ans);
}
