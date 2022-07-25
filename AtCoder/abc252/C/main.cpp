#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    vector<map<ll, ll>> mp(10);

    rep(i, 0, n) {
        rep(j, 0, 10) { mp[s[i][j] - '0'][j]++; }
    }

    ll ans = 1e9;

    rep(i, 0, 10) {
        //cout << i << "; ";
        ll maxn = 0;
        for (auto y : mp[i]) {
            //cout << y.first << "," << y.second << " ";
            maxn = max(maxn, y.first + (y.second - 1) * 10);
        }
        //cout << endl;
        ans = min(ans, maxn);
    }

    put(ans);
}
