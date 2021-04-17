//pdfmita
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct Point {
    ll x, y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
} typedef P;

int main() {
    ll n;
    cin >> n;
    vector<P> red(n), blue(n);
    rep(i, 0, n) {
        ll x, y;
        cin >> x >> y;
        red[i] = {x, y};
    }
    rep(i, 0, n) {
        ll x, y;
        cin >> x >> y;
        blue[i] = {x, y};
    }

    sort(all(red));
    sort(all(blue));

    ll ans = 0;

    map<ll, ll> f;

    rep(i, 0, n) {
        vector<P> pairs;
        ll index = -1;
        ll tmp = -1;
        rep(j, 0, n) {
            if (f.count(j)) continue;
            if (blue[i].x > red[j].x and blue[i].y > red[j].y and
                red[j].y > tmp) {
                tmp = red[j].y;
                index = j;
            }
        }
        if (index > -1) {
            f[index]++;
            ans++;
        }
    }

    put(ans);
}
