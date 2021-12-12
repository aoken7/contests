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

ll mod = 1e9 + 7;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    dp[0][0] = 1;

    rep(i, 0, n) {
        rep(j, 0, k + 1) {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= mod;
            if (j >= a[i]) (dp[i + 1][j] += dp[i][j - a[i]]) %= mod;
        }
    }

    rep(i, 0, n) {
        rep(j, 0, k + 1) {
            printf("%2lld ", dp[i][j]);
        }
        cout << endl;
    }

    

    put(dp[n][k]);
}