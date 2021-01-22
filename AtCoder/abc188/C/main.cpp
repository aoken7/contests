#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define debug(i) cerr << fixed << i << endl
#define debugl(a)                      \
    for (auto x : a) cerr << x << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    queue<pair<ll, ll>> a;
    rep(i, 0, pow(2, n)) {
        ll tmp;
        cin >> tmp;
        a.push({tmp, i + 1});
    }

    while (a.size() > 2) {
        auto x = a.front();
        a.pop();
        auto y = a.front();
        a.pop();
        if (x.first > y.first)
            a.push(x);
        else
            a.push(y);
    }

    auto x = a.front();
    a.pop();
    auto y = a.front();
    a.pop();

    if (x.first < y.first)
        put(x.second);
    else
        put(y.second);
}
