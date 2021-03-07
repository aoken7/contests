#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<ll> x, y, r;
vector<ll> a, b, c, d;
vector<vector<bool>> flag;

// x1からx2、y1からy2で囲まれた長方形を塗りつぶす
// x1 <= x2  y1 <= y2
void fill_box(ll x1, ll x2, ll y1, ll y2) {
    for (ll i = x1; i <= x2; i++) {
        for (ll j = y1; j <= y2; j++) {
            flag[j][i] = true;
        }
    }
}

bool naive_filler(ll x1, ll y1, ll i) {
    if (x1 + 1 >= 10000 or y1 + 1 >= 10000) return false;

    if (!flag[y1][x1] and !flag[y1 + 1][x1] and !flag[y1][x1 + 1] and
        !flag[y1 + 1][x1 + 1]) {
        fill_box(x1, x1 + 1, y1, y1 + 1);

        a[i] = x1;
        c[i] = x1 + 1;
        b[i] = y1;
        d[i] = y1 + 1;

        return true;
    } else {
        return false;
    }
}

//(x+0.5, y+0.5)が範囲内に含まれているか調べる
bool is_in_box(ll i) {
    if (min(a[i], c[i]) <= x[i] + 0.5 and x[i] + 0.5 <= max(a[i], c[i]) and
        min(b[i], d[i]) <= y[i] + 0.5 and y[i] + 0.5 <= max(b[i], d[i])) {
        return true;
    } else {
        return false;
    }
}

void calc_point() {
    ll n = x.size();
    double sum = 0;
    rep(i, 0, n) {
        ll s = abs(a[i] - c[i]) * abs(b[i] - d[i]);
        if (is_in_box(i)) {
            double p = 1 - pow(1 - min(r[i], s) / double(max(r[i], s)), 2);
            sum += p / (double)n;
        }
    }
    put(1e9 * sum);
}

void solve(ll n){
    queue<ll> que;
    rep(i, 0, n) {
        bool f = naive_filler(x[i], y[i], i);
        if (!f) {
            que.push(i);
        }
    }

    while (!que.empty()) {
        ll x1 = rand() % 10000;
        ll y1 = rand() % 10000;
        ll i = que.front();
        if (naive_filler(x1, y1, i)) {
            que.pop();
        }
    }
}

int main() {
    ll n;
    cin >> n;
    x = y = r = vector<ll>(n);
    rep(i, 0, n) cin >> x[i] >> y[i] >> r[i];

    a = b = c = d = vector<ll>(n, 0);
    flag = vector<vector<bool>>(10000, vector<bool>(10000, false));

    solve(n);

    rep(i, 0, n) {
        cout << a[i] << " " << b[i] << " " << c[i] << " " << d[i] << endl;
    }

#ifdef DEBUG
    calc_point();
#endif
}