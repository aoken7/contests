#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll q;
    cin >> q;

    map<ll, ll> mp;
    rep(i, 0, q) {
        ll n;
        cin >> n;
        if (n == 1) {
            ll x;
            cin >> x;
            mp[x]++;
        } else if (n == 2) {
            ll x, c;
            cin >> x >> c;
            mp[x] -= min(mp[x], c);
            if (mp[x] == 0) {
                mp.erase(x);
            }
        } else {
            auto minv = mp.begin()->first;
            auto maxv = mp.rbegin()->first;

            ll ans = maxv - minv;
            put(ans);
        }
    }
}
