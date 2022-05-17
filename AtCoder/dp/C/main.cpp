#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll INF = 1e18;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    rep(i, 0, n) { cin >> a[i] >> b[i] >> c[i]; }

    vector<ll> dp_a(n+1), dp_b(n+1), dp_c(n+1);
}
