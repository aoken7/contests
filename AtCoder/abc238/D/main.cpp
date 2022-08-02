//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    // x and y = a;
    // x + y = s;
    // x = s - y;
    // (s - y) and y = a;
    // s and y - y = a

    rep(i, 0, t) {
        ll a, s;
        cin >> a >> s;

        string ans = "No";
        if (2 * a <= s) {
            ll b = s - 2 * a;
            if((b & a) == 0) ans = "Yes";
        }
        put(ans);
    }
}
