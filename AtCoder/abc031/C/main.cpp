#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n;
vector<ll> a;

pair<ll, ll> calc(ll r, ll l) {
    ll tk = 0, ao = 0;

    if (r > l) swap(r, l);
    // if (abs(r - l) % 2 == 0 and abs(r - l) > 2) l--;

    for (ll i = r, cnt = 0; i <= l; i++, cnt++) {
        if (cnt % 2 == 0)
            tk += a[i];
        else
            ao += a[i];

        // cout << "(" << tk << "," << ao << ") ";
    }
    // cout << endl;

    return {ao, tk};
}

int main() {
    cin >> n;
    a = vector<ll>(n);
    rep(i, 0, n) cin >> a[i];

    ll ans = -1e9;

    rep(i, 0, n) {
        vector<pair<ll, ll>> q;
        rep(j, 0, n) {
            if (i == j) continue;
            auto p = calc(i, j);
            q.push_back(p);
        }
        // cout << q.top().first << " " << q.top().second << endl;
        ll maxn = -1e9, idx = -1;
        rep(j, 0, q.size()) {
            if (maxn < q[j].first) {
                maxn = q[j].first;
                idx = j;
            }
        }
        //put(q[i].second)
        ans = max(ans, q[idx].second);
    }

    put(ans);
}
