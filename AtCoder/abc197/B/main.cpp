#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w, x, y;
    cin >> h >> w >> x >> y;

    vector<vector<char>> s(h + 2, vector<char>(w + 2, '#'));

    rep(y, 1, h + 1) {
        rep(x, 1, w + 1) { cin >> s[y][x]; }
    }

    ll ans = 1;

    for (ll i = x + 1; s[i][y] != '#'; i++) {
        ans++;
    }
    for (ll i = x - 1; s[i][y] != '#'; i--) {
        ans++;
    }
    for (ll i = y + 1; s[x][i] != '#'; i++) {
        ans++;
    }
    for (ll i = y - 1; s[x][i] != '#'; i--) {
        ans++;
    }

    // cout << endl;

    put(ans);
}
