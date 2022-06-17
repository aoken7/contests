
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), s(n + 1,0);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) s[i + 1] = s[i] + a[i];

    map<ll, ll> mp;

    ll ans = 0;

    rep(i, 1, n+1) {
        mp[s[i-1]]++;
        ans += mp[s[i] - k];
    }

    put(ans);
}
