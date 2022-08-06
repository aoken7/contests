#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

vector<string> rotation(vector<string> s) {
    ll w = s[0].size();
    ll h = s.size();
    vector<string> t(s[0].size());
    rep(y, 0, w) {
        rep(x, 0, h) { t[y].push_back(s[h - 1 - x][y]); }
    }
    return t;
}

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

int main() {
    ll n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, 0, n) cin >> s[i];
    rep(i, 0, n) cin >> t[i];

    auto comp_s = compression(s);
    auto comp_t = compression(t);

    rep(i, 0, 4) {
        if (comp_s == comp_t) {
            put("Yes");
            return 0;
        }
        comp_t = rotation(comp_t);
    }

    put("No");
}