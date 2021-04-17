#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];

    ll ans = 1e9;

    rep(i, 0, n) {
        rep(j, 0, n) {
            if (i == j) continue;
            ans = min(ans, min(max(a[i],b[j]), a[i]+b[i]));
        }
    }

    put(ans);
}
