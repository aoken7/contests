#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct Point {
    ll x, y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
} typedef P;

ll gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    ll n;
    cin >> n;
    vector<P> p(n);
    rep(i, 0, n) cin >> p[i].x >> p[i].y;

    set<pair<ll, ll>> ans;

    sort(all(p));

    rep(i, 0, n - 1) {
        rep(j, i + 1, n) {
            auto k1 = make_pair(p[i].x - p[j].x, p[i].y - p[j].y);
            auto k2 = make_pair(p[j].x - p[i].x, p[j].y - p[i].y);

            ll k1_gcd = abs(gcd(k1.first, k1.second));
            ll k2_gcd = abs(gcd(k2.first, k2.second));

            k1.first /= k1_gcd;
            k1.second /= k1_gcd;
            k2.first /= k2_gcd;
            k2.second /= k2_gcd;

            ans.insert(k1);
            ans.insert(k2);
        }
    }

    put(ans.size());
}
