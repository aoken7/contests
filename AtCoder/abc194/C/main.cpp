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
    rep(i, 0, n) cin >> a[i];

    vector<ll> pow_sum(n), sum(n);
    pow_sum[0] = a[0] * a[0];
    sum[0] = a[0];
    rep(i, 1, n) {
        pow_sum[i] = pow_sum[i - 1] + a[i] * a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    ll ans = 0;

    rep(i, 0, n-1) {
        ans += (n - i - 1) * a[i] * a[i] + (pow_sum[n - 1] - pow_sum[i]) -
               ((sum[n - 1] - sum[i]) * 2 * a[i]);
    }

    put(ans);
}
