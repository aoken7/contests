#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, a, b;
ll p, q, r, s;

ll check1(ll x) { return max(1 - a, 1 - b) <= x and x <= min(n - a, n - b); }
ll check2(ll x) { return max(1 - a, b - n) <= x and x <= min(n - a, b - 1); }

int main() {
    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;

    for (ll i = p; i <= q; i++) {
        for (ll j = r; j <= s; j++) {
            if (i - a == j - b) {
                ll k = i - a;
                if (check1(k)) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            } else if (abs(i - a) == abs(j - b)) {
                ll k = i - a;
                if (check2(k)) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
