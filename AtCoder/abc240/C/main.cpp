#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];

    map<ll, set<ll>> dp;
    dp[0] = {0};
    rep(i, 0, n) {
        for (auto d : dp[i]) {
            dp[i + 1].insert(d + a[i]);
            dp[i + 1].insert(d + b[i]);
        }
    }

    for (auto d : dp[n]) {
        if (d == x) {
            put("Yes");
            return 0;
        }
    }

    put("No");
    return 0;
}
