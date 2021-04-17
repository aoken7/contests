//他人の解答観た
//場合分けが苦手すぎる

#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll x, y;
    cin >> x >> y;

    ll ans = 1e18;

    if (x <= y) {
        ans = min(ans, y - x);
    }
    if (-x <= -y) {
        ans = min(ans, -y + x + 2);
    }
    if (-x <= y) {
        ans = min(ans, y + x + 1);
    }
    if (x <= -y) {
        ans = min(ans, -y - x + 1);
    }

    put(ans);
}
