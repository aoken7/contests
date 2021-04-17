#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w;
    cin >> h >> w;
    vector<vector<char>> s(w + 2, vector<char>(h + 2, '#'));
    rep(y, 1, h + 1) {
        rep(x, 1, w + 1) { cin >> s[x][y]; }
    }

    ll ans = 0;
    vector<vector<pair<ll, ll>>> memo(w + 2,
                                      vector<pair<ll, ll>>(h + 2, {0, 0}));

    rep(y, 0, h + 2) {
        ll start = -1;
        rep(x, 0, w + 2) {
            if (s[x][y] == '.') {
                if (start == -1) {
                    start = x;
                }
            } else {
                if (start != -1) {
                    rep(i, start, x) { memo[i][y].first = x - start; }
                }
                start = -1;
            }
        }
    }

    rep(x, 0, w + 2) {
        ll start = -1;
        rep(y, 0, h + 2) {
            if (s[x][y] == '.') {
                if (start == -1) {
                    start = y;
                }
            } else {
                if (start != -1) {
                    rep(i, start, y) { memo[x][i].second = y - start; }
                }
                start = -1;
            }
        }
    }

    rep(y, 1, h + 1) {
        rep(x, 1, w + 1) {
            ans = max(ans, memo[x][y].first + memo[x][y].second - 1);
            //cout << memo[x][y].first + memo[x][y].second << " ";
        }
        //cout << endl;
    }

    put(ans);
}
