// pdfmita
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll a, b, c, d, e, f;

int main() {
    cin >> a >> b >> c >> d >> e >> f;

    ll s = 0;
    ll w = a * 100;

    rep(i, 0, 100) {
        rep(j, 0, 100) {
            ll x = i * 100 * a + j * 100 * b;
            rep(k, 0, 100) {
                rep(l, 0, 100) {
                    ll y = k * c + l * d;
                    if (x + y > f) continue;
                    if (x * e < y * 100) continue;
                    if (y == 0) continue;
                    if ((x + y) * s < y * (w)) {
                        s = y;
                        w = x + y;
                    }
                }
            }
        }
    }

    cout << w << " " << s << endl;
}
