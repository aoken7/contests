#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(3000 + 1));

    ll mod = 998244353;

    dp[0][0] = 1;
    rep(i, 0, n + 1) {
        rep(j, 0, 3000) dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % mod;
        if (i != n)
            for (ll j = a[i]; j <= b[i]; j++)
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod;
        
    }

    put(dp[n][3000]);
}
