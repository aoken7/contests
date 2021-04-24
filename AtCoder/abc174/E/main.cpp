// pdf観た
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, k;
vector<ll> a;

ll solve(ll x) {
    ll cnt = 0;
    rep(i, 0, n) { cnt += (a[i] - 1) / x; }

    if (cnt <= k)
        return true;
    else
        return false;
}

int main() {
    cin >> n >> k;
    a = vector<ll>(n);
    rep(i, 0, n) cin >> a[i];

    ll ok = 1e9, ng = 0;
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (solve(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    put(ok);
}
