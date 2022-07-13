#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w;
    cin >> h >> w;
    ll r, c;
    cin >> r >> c;

    vector<vector<char>> a(h + 2, vector<char>(w + 2, '#'));
    rep(y, 1, h+1) rep(x, 1, w+1) a[y][x] = '.';

    ll ans = 0;
    if (a[r + 1][c] == '.') ans++;
    if (a[r - 1][c] == '.') ans++;
    if (a[r][c + 1] == '.') ans++;
    if (a[r][c - 1] == '.') ans++;

    rep(y, 0, h) {
        //rep(x, 0, w) cout << a[y][x] << " ";
        //cout << endl;
    }

    put(ans);
}
