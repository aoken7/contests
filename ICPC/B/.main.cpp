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

vector<vector<ll>> table, flag;
ll cnt = 0;

void dfs(Point p) {
    if (table[p.x][p.y] == ll(1e9) or flag[p.x][p.y]) return;

    flag[p.x][p.y] = 1;
    cnt++;

    // up
    for (ll i = 1;; i++) {
        if (table[p.x][p.y + i] == ll(1e9) or flag[p.x][p.y + i]) break;
        if (table[p.x][p.y + i] != ll(-1e9)) {
            dfs({p.x, p.y + i});
        }
        flag[p.x][p.y + i] = 1;
    }

    // right
    for (ll i = 1;; i++) {
        if (table[p.x + i][p.y] == ll(1e9) or flag[p.x + i][p.y]) break;
        if (table[p.x + i][p.y] != ll(-1e9)) {
            dfs({p.x + i, p.y});
        }
        flag[p.x + i][p.y] = 1;
    }
    // down
    for (ll i = 1;; i++) {
        if (table[p.x][p.y - i] == ll(1e9) or flag[p.x][p.y - i]) break;
        if (table[p.x][p.y - i] != ll(-1e9)) {
            dfs({p.x, p.y - i});
        }
        flag[p.x][p.y - i] = 1;
    }
    // left
    for (ll i = 1;; i++) {
        if (table[p.x - i][p.y] == ll(1e9) or flag[p.x - i][p.y]) break;
        if (table[p.x - i][p.y] != ll(-1e9)) {
            dfs({p.x - i, p.y});
        }
        flag[p.x - i][p.y] = 1;
    }
}

int main() {
    while (1) {
        ll w, h;
        cin >> w >> h;

        if (w == h and h == 0) break;  // 終了条件

        ll k = w + h - 1;

        table = vector<vector<ll>>(w + 2, vector<ll>(h + 2, 1e9));
        rep(i, 1, w + 1) rep(j, 1, h + 1) table[i][j] = -1e9;
        
        flag = vector<vector<ll>>(w + 2, vector<ll>(h + 2, 0));

        Point start = {ll(1e9), ll(1e9)};

        rep(i, 0, k) {
            ll x, y, n;
            cin >> x >> y >> n;
            table[x][y] = n;

            
            start = {x, y};
            
        }

        cnt = 0;
        dfs(start);

        if (cnt == k) {
            put("YES");
        } else {
            put("NO");
        }
    }

    return 0;
}