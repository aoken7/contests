#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

//<lib>
//<prefix>matrix_compression
vector<string> compression(vector<string> s) {
    ll w = s[0].size();
    ll h = s.size();
    map<ll, ll> unrow, uncol;
    ll left, right, top, bottom;
    left = bottom = 1e9;
    right = top = -1;
    rep(y, 0, h) {
        rep(x, 0, w) {
            if (s[y][x] == '#') {
                bottom = min(y, bottom);
                top = max(y, top);
                left = min(x, left);
                right = max(x, right);
            }
        }
    }

    for (ll x = 0; x < left; x++) uncol[x]++;
    for (ll x = right + 1; x < w; x++) uncol[x]++;
    for (ll y = 0; y < bottom; y++) unrow[y]++;
    for (ll y = top + 1; y < h; y++) unrow[y]++;

    //"#"を含まない行を削除した行列の作成
    //削除した行の分だけ高さが減るのでh-unrow.size()
    vector<string> t(h - unrow.size());
    ll y_cnt = 0;
    rep(y, 0, h) {
        if (unrow.count(y)) continue;
        rep(x, 0, w) {
            if (uncol.count(x)) continue;
            t[y_cnt].push_back(s[y][x]);
        }
        y_cnt++;
    }
    return t;
}
//<lib/>

int main() {}