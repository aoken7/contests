#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, m;
ll x, y;
vector<ll> a, b;

ll solve() {
    ll idxa = 0, idxb = 0;
    ll time = 0;
    ll cnt = 0;
    ll flag = 1;  // 1の時A,-1のときB
    while (1) {
        rep(i, idxa, n) {
            if (time <= a[idxa]) break;
            idxa++;
        }
        if (idxa >= n) break;
        time = a[idxa] + x;
        idxa++;
        ////
        rep(i, idxb, m) {
            if (time <= b[idxb]) break;
            idxb++;
        }
        if (idxb >= m) break;
        time = b[idxb] + y;
        idxb++;

        cnt++;

        // cout << idxa << " " << idxb << endl;
    }

    return cnt;
}

int main() {
    cin >> n >> m;
    cin >> x >> y;
    a = vector<ll>(n);
    b = vector<ll>(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];

    put(solve());
}
