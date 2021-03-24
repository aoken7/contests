#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll EXPAND_NUM = 9;
ll MOVE_NUM = 4;


vector<ll> x, y, r;
vector<ll> a, b, c, d;
vector<vector<int>> flag;

// x1からx2、y1からy2で囲まれた長方形を塗りつぶす
// x1 <= x2  y1 <= y2
void fill_box(ll x1, ll x2, ll y1, ll y2, ll f) {
    for (ll i = x1; i <= x2; i++) {
        for (ll j = y1; j <= y2; j++) {
            flag[j][i] = f;
        }
    }
}

bool is_fill_box(ll x1, ll x2, ll y1, ll y2, ll f) {
    for (ll i = x1; i <= x2; i++) {
        for (ll j = y1; j <= y2; j++) {
            if (flag[j][i] != f and flag[j][i] != -1) return false;
        }
    }
    return true;
}

bool k_naive_filler(ll x1, ll y1, ll i, ll k) {
    if (x1 + k >= 10000 or y1 + k >= 10000) return false;

    if (is_fill_box(x1, x1 + k, y1, y1 + k, i)) {
        fill_box(x1, x1 + k, y1, y1 + k, i);

        a[i] = x1;
        c[i] = x1 + k;
        b[i] = y1;
        d[i] = y1 + k;

        return true;
    } else {
        return false;
    }
}

//(x+0.5, y+0.5)が範囲内に含まれているか調べる
bool is_in_box(ll x1, ll x2, ll y1, ll y2, ll f) {
    if (min(x1, x2) <= x[f] + 0.5 and x[f] + 0.5 <= max(x1, x2) and
        min(y1, y2) <= y[f] + 0.5 and y[f] + 0.5 <= max(y1, y2)) {
        return true;
    } else {
        return false;
    }
}

bool is_border_checker(ll p) {
    if (0 > p or 10000 <= p) {
        return false;
    } else {
        return true;
    }
}

//上方向に四角形を1マス拡大する
bool expand_top(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll top = max(y1, y2);

    if (!is_border_checker(top + EXPAND_NUM)) return false;
    if (!is_fill_box(x1, x2, top, top + EXPAND_NUM, f)) return false;

    fill_box(x1, x2, top, top + EXPAND_NUM, f);

    if (b[f] > d[f])
        b[f] += EXPAND_NUM;
    else
        d[f] += EXPAND_NUM;

    return true;
}

//右方向に四角形を1マス拡大する
bool expand_right(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll right = max(x1, x2);

    if (!is_border_checker(right + EXPAND_NUM)) return false;
    if (!is_fill_box(right, right + EXPAND_NUM, y1, y2, f)) return false;

    fill_box(right, right + EXPAND_NUM, y1, y2, f);

    if (a[f] > c[f])
        a[f] += EXPAND_NUM;
    else
        c[f] += EXPAND_NUM;

    return true;
}

//下方向に四角形を1マス拡大する
bool expand_under(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll under = min(y1, y2);

    if (!is_border_checker(under - EXPAND_NUM)) return false;
    if (!is_fill_box(x1, x2, under - EXPAND_NUM, under, f)) return false;

    fill_box(x1, x2, under - EXPAND_NUM, under, f);

    if (b[f] > d[f])
        d[f] -= EXPAND_NUM;
    else
        b[f] -= EXPAND_NUM;

    return true;
}

//左方向に四角形を1マス拡大する
bool expand_left(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll left = min(x1, x2);

    if (!is_border_checker(left - EXPAND_NUM)) return false;
    if (!is_fill_box(left - EXPAND_NUM, left, y1, y2, f)) return false;

    fill_box(left - EXPAND_NUM, left, y1, y2, f);

    if (a[f] > c[f])
        c[f] -= EXPAND_NUM;
    else
        a[f] -= EXPAND_NUM;

    return true;
}

void eracse_box(ll x1, ll x2, ll y1, ll y2, ll f) {
    for (ll i = x1; i <= x2; i++) {
        for (ll j = y1; j <= y2; j++) {
            flag[j][i] = -1;
        }
    }
}

bool move_top(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll maxn = max(y1, y2);
    ll minn = min(y1, y2);

    if (!is_border_checker(maxn + MOVE_NUM)) return false;
    if (!is_fill_box(x1, x2, maxn, maxn + MOVE_NUM, f)) return false;
    if (!is_in_box(x1, x2, y1 + MOVE_NUM, y2 + MOVE_NUM, f)) return false;

    fill_box(x1, x2, maxn, maxn + MOVE_NUM, f);
    eracse_box(x1, x2, minn, minn + MOVE_NUM, f);

    d[f] += MOVE_NUM;
    b[f] += MOVE_NUM;

    return true;
}

bool move_right(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll maxn = max(x1, x2);
    ll minn = min(x1, x2);

    if (!is_border_checker(maxn + MOVE_NUM)) return false;
    if (!is_fill_box(maxn, maxn + MOVE_NUM, y1, y2, f)) return false;
    if (!is_in_box(x1 + MOVE_NUM, x2 + MOVE_NUM, y1, y2, f)) return false;

    fill_box(maxn, maxn + MOVE_NUM, y1, y2, f);
    eracse_box(minn, minn + MOVE_NUM, y1, y2, f);

    a[f] += MOVE_NUM;
    c[f] += MOVE_NUM;

    return true;
}

bool move_under(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll maxn = max(y1, y2);
    ll minn = min(y1, y2);

    if (!is_border_checker(minn - MOVE_NUM)) return false;
    if (!is_fill_box(x1, x2, minn - MOVE_NUM, minn, f)) return false;
    if (!is_in_box(x1, x2, y1 + MOVE_NUM, y2 + MOVE_NUM, f)) return false;

    fill_box(x1, x2, minn - MOVE_NUM, minn, f);
    eracse_box(x1, x2, maxn - MOVE_NUM, maxn, f);

    d[f] -= MOVE_NUM;
    b[f] -= MOVE_NUM;

    return true;
}

bool move_left(ll x1, ll x2, ll y1, ll y2, ll f) {
    ll maxn = max(x1, x2);
    ll minn = min(x1, x2);

    if (!is_border_checker(minn - MOVE_NUM)) return false;
    if (!is_fill_box(minn - MOVE_NUM, minn, y1, y2, f)) return false;
    if (!is_in_box(x1 + MOVE_NUM, x2 + MOVE_NUM, y1, y2, f)) return false;

    fill_box(minn - MOVE_NUM, minn, y1, y2, f);
    eracse_box(maxn - MOVE_NUM, maxn, y1, y2, f);

    a[f] -= MOVE_NUM;
    c[f] -= MOVE_NUM;

    return true;
}

//得点計算関数、つかわないかも
void calc_point() {
    ll n = x.size();
    double sum = 0;
    rep(i, 0, n) {
        ll s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
        if (is_in_box(a[i], c[i], b[i], d[i], i)) {
            double p = 1 - powf(1 - min(r[i], s) / double(max(r[i], s)), 2);
            sum += p / (double)n;
        }
    }
    put(ll(1e9 * sum));
}

void solve(ll n) {
    queue<ll> que;
    // 1*1の正方形を設置する
    //衝突した場合queにためる
    rep(i, 0, n) {
        // bool f = k_naive_filler(x[i], y[i], i,ll(sqrt(r[i])));
        bool f = k_naive_filler(x[i], y[i], i, 1);
        if (!f) {
            que.push(i);
        }
    }

    while (!que.empty()) {
        ll x1 = rand() % 10000;
        ll y1 = rand() % 10000;
        ll i = que.front();
        if (k_naive_filler(x1, y1, i, 1)) {
            que.pop();
        }
    }

    map<ll, ll> mp, mp2, mp3, mp4, mp5;

    //EXPAND_NUM = n/20+1;
    MOVE_NUM = 800/n;

    for (ll j = 0; j < 2000; j++) {
        if (mp.size() == n) break;
        rep(i, 0, n) {
            if (mp.size() == n) break;
            if (mp.count(i)) continue;
            int cnt = 0;
            int s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
            if (s >= r[i]) {
                mp[i]++;
                continue;
            }
            if (expand_top(a[i], c[i], b[i], d[i], i))
                cnt++;
            else if (mp2[i] < 200 and move_under(a[i], c[i], b[i], d[i], i)){
                cnt++;
                mp2[i]++;
        }else
                mp2[i]++;

            s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
            if (s >= r[i]) {
                mp[i]++;
                continue;
            }
            if (expand_right(a[i], c[i], b[i], d[i], i))
                cnt++;
            else if (mp3[i] < 200 and move_left(a[i], c[i], b[i], d[i], i)){
                cnt++;
                mp3[i]++;
            }else
                mp3[i]++;

            s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
            if (s >= r[i]) {
                mp[i]++;
                continue;
            }
            if (expand_under(a[i], c[i], b[i], d[i], i))
                cnt++;
            else if (mp4[i] < 200 and move_top(a[i], c[i], b[i], d[i], i)){
                cnt++;
                mp4[i]++;
            }else
                mp4[i]++;

            s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
            if (s >= r[i]) {
                mp[i]++;
                continue;
            }
            if (expand_left(a[i], c[i], b[i], d[i], i))
                cnt++;
            else if (mp5[i] < 200 and move_right(a[i], c[i], b[i], d[i], i)){
                cnt++;
                mp5[i]++;
            }else
                mp5[i]++;

            if (cnt == 0) mp[i]++;
        }
    }
}

int main(int argc, char* argv[]) {
    ll n;
    cin >> n;
    x = y = r = vector<ll>(n);
    rep(i, 0, n) cin >> x[i] >> y[i] >> r[i];

    a = b = c = d = vector<ll>(n, 0);
    flag = vector<vector<int>>(10000, vector<int>(10000, -1));

    solve(n);

#ifndef DEBUG
    rep(i, 0, n) {
        cout << a[i] << " " << b[i] << " " << c[i] << " " << d[i] << endl;
    }
#endif

    // rep(i,0,n){cout << i << ": s:" << abs(a[i]-c[i])*abs(b[i]-d[i]) << " r:"
    // << r[i] << " " << abs(a[i]-c[i])*abs(b[i]-d[i]) / (double)r[i] << endl; }

#ifdef DEBUG
    calc_point();
#endif
}