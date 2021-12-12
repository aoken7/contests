#include <bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define debug(i) cerr << fixed << i << endl
#define debugl(a)                      \
    for (auto x : a) cerr << x << ' '; \
    cout << endl
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));

    dp[0][0] = true;

    rep(i, 0, n) {
        rep(j, 0, k + 1) {
            dp[i + 1][j] = dp[i + 1][j] | dp[i][j];
            if (j >= a[i]) dp[i + 1][j] = dp[i + 1][j] | dp[i][j - a[i]];
        }
    }

    rep(i, 0, n + 1) {
        rep(j, 0, k + 1) { cout << dp[i][j] << " "; }
        cout << endl;
    }

    cout << (dp[n][k] ? "Yes" : "No") << endl;
}