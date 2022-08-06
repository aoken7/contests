#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];

    ll cnt = 0;
    set<pair<ll, ll>> st;
    rep(i, 1, n + 1) {
        if (i == a[a[i]] and i != a[i]) {
            st.insert({min(i, a[i]), max(i, a[i])});
        }
        if (i == a[i]) cnt++;
    }

    ll ans = (cnt * (cnt - 1)) / 2 + st.size();
    put(ans);
}
