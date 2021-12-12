#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    ll ans = 0;
    string cho = "chokudai";
    ll n = s.size();
    vector<vector<ll>> dp(n + 1, vector<ll>(cho.size() + 1, 0));

    dp[0][0] = 1;

    ll mod = 1e9 + 7;

    rep(i, 0, n) {
        rep(j, 0, cho.size() + 1) {
            dp[i + 1][j] += dp[i][j];
            if (s[i] == 'c' and j == 0) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'h' and j == 1) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'o' and j == 2) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'k' and j == 3) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'u' and j == 4) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'd' and j == 5) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'a' and j == 6) dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'i' and j == 7) dp[i + 1][j + 1] += dp[i][j];
        }
        rep(j, 0, cho.size() + 1) dp[i + 1][j] %= mod;
    }

    put(dp[n][cho.size()]);

    return 0;

    reverse(all(s));

   // ll ans = 0;
    // ll mod = 1e9 + 7;

    map<char, ll> mp;
    rep(i, 0, s.size()) {
        switch (s[i]) {
            case 'a':
                if (mp['i']) mp[s[i]]++;
                break;
            case 'd':
                if (mp['a']) mp[s[i]]++;
                break;
            case 'u':
                if (mp['d']) mp[s[i]]++;
                break;
            case 'k':
                if (mp['u']) mp[s[i]]++;
                break;
            case 'o':
                if (mp['k']) mp[s[i]]++;
                break;
            case 'h':
                if (mp['o']) mp[s[i]]++;
                break;
            case 'c':
                if (mp['h']) mp[s[i]]++;
                break;
            default:
                mp[s[i]]++;
                break;
        }

        if (s[i] == 'c') {
            if (mp['h'] and mp['o'] and mp['k'] and mp['u'] and mp['d'] and
                mp['a'] and mp['i']) {
                ans += max({mp['c'], mp['h'], mp['o'], mp['k'], mp['u'],
                            mp['d'], mp['a'], mp['i']}) %
                       mod;
            }
        }
    }

    put(ans);
}
