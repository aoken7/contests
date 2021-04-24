//解説放送そのまま
//確率つらすぎる

#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll score(string s) {
    vector<ll> cnt(10);
    iota(all(cnt), 0LL);
    for (auto c : s) {
        cnt[c - '0'] *= 10;
    }
    return accumulate(all(cnt), 0LL);
}

int main() {
    ll k;
    cin >> k;
    string s, t;
    cin >> s >> t;

    vector<ll> c(10, k);
    c[0] = 0;
    rep(i, 0, 4) { c[s[i] - '0']--; }
    rep(i, 0, 4) { c[t[i] - '0']--; }
    ll cnt = 0;
    rep(a, 1, 10) {
        rep(b, 1, 10) {
            s[4] = '0' + a;
            t[4] = '0' + b;
            if (score(s) > score(t)) {
                if (a == b)
                    cnt += c[a] * (c[a] - 1);
                else
                    cnt += c[a] * c[b];
            }
        }
    }
    ll C = 0;
    rep(i, 0, 10) { C += c[i]; }
    ll tot = C * (C - 1);
    double ans = (double)cnt / tot;

    put(ans);
}
