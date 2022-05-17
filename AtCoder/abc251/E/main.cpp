//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) { cin >> a[i]; }

    ll dp[n + 10][2];

    ll ans = ll(1e18);
    for (ll t = 0; t <= 1; t++) {
        if (t == 0) dp[1][0] = 0, dp[1][1] = ll(1e18);
        if (t == 1) dp[1][0] = ll(1e18), dp[1][1] = a[0];

        rep(i,2,n+1){
            dp[i][0] = dp[i-1][1];
            dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + a[i-1];
        }

        if(t == 0) ans = min(ans, dp[n][1]);
        if(t == 1) ans = min(ans, min(dp[n][0], dp[n][1]));
    }

    put(ans);
}
