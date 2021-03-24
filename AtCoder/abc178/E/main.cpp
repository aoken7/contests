#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    deque<pair<ll, ll>> p(n);

    rep(i, 0, n) {
        ll x, y;
        cin >> x >> y;
        p[i] = {x, y};
    }

    sort(all(p));

    ll ans = 0;
    while (!p.empty()) {
        auto f = p.front();
        p.pop_front();
        auto e = p.back();
        p.pop_back();
        ans = max(ans, abs(f.first - e.first) + abs(f.second - e.second));

        ll cnt = p.size();
        rep(i, 0, cnt) {
            auto tmp = p.front();
            p.pop_front();
            if (tmp.first >= min(f.first, e.first) and
                tmp.second <= max(f.second, e.second)) {
                    p.push_back(tmp);
            }
        }
    }

    put(ans);
}
