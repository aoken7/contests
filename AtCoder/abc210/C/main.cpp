#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> c(n);
    rep(i, 0, n) cin >> c[i];

    ll ans = 0;
    ll cnt = 0;
    map<ll, ll> mp;

    // [l, r)
    ll l = 0, r = k-1;
    rep(i, 0, k) {
        if (mp[c[i]] < 1) cnt++;
        mp[c[i]]++;
        ans = cnt;
    }
    for (;;) {
        r++;
        if (r >= n) break;
        // add
        if (mp[c[r]] < 1) cnt++;
        mp[c[r]]++;

        // remove
        mp[c[l]]--;
        if (mp[c[l]] < 1) cnt--;
        l++;
        ans = max(ans, cnt);
    }

    put(ans);
}
