#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    map<ll, ll> mp;
    ll ans = 0;
    ll cnt = 0;
    

    mp[a[0]]++;
    // [l,r)
    for (ll l = 0, r = 0;;) {
        //右を伸ばす
        for (;;) {
            if (cnt >= k) break;
            r++;
            if (r > n - 1) break;
            if (mp[a[r]] < 1) cnt++;
            mp[a[r]]++;
        }
        ans = max(ans, r - l);
        //左を伸ばす
        l++;
        if (l > r) continue;
        mp[a[l]]--;
        if (mp[a[l]] < 1) cnt--;

        if (r > n - 1) break;
    }

    put(ans);
}
