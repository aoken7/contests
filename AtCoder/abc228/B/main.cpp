#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, x;
    cin >> n >> x, x--;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> f(n + 1, 0);

    f[x] = 1;

    ll ans = 1;
    for (;;) {
        ll top = a[x] - 1;
        if (f[top] == 0) {
            f[top] = 1;
            x = top;
            ans++;
        } else {
            break;
        }
    }
    put(ans);
}
