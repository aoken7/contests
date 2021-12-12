#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    vector<ll> c(n);
    rep(i, 0, n) cin >> c[i];

    ll ans = 0;

    map<ll, ll> mp;
    rep(i, 0, n) mp[c[i]]++;

    sort(all(c));

    ans = c[0];

    rep(i, 1, n) {
        ans = (ans * (c[i] - i)) % mod;// + (c[i] - c[i - 1]);
    }
) % mod
    put(ans);
}
