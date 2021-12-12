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
    ll n;
    cin >> n;
    vector<ll> t(n), l(n), r(n);
    rep(i, 0, n) cin >> t[i] >> l[i] >> r[i];

    vector<pair<ll, ll>> v(n);

    rep(i, 0, n) {
        if (t[i] == 1) {
            v[i] = {l[i] * 2, r[i] * 2};
        } else if (t[i] == 2) {
            v[i] = {l[i] * 2, r[i] * 2 - 1};
        } else if (t[i] == 3) {
            v[i] = {l[i] * 2 + 1, r[i] * 2};
        } else {
            v[i] = {l[i] * 2 + 1, r[i] * 2 - 1};
        }
    }

    //sort(all(v));

    ll ans = 0;

    rep(i, 0, n) {
        rep(j, i+1, n) {
            auto tmp1 = v[i];
            auto tmp2 = v[j];
            if (tmp1 > tmp2) swap(tmp1, tmp2);
            if (tmp1.first <= tmp2.first and tmp1.second >= tmp2.first )//and tmp1.second <= tmp2.second)
                ans++;
        }
    }

    put(ans);
}
