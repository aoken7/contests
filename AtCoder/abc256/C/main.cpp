#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<ll> h(3), w(3);

int main() {
    rep(i, 0, 3) cin >> h[i];
    rep(i, 0, 3) cin >> w[i];

    ll ans = 0;

    ll b[3][3];
    rep(i, 1, 29) {
        rep(j, 1, 29) {
            rep(k, 1, 29) {
                rep(l, 1, 29) {
                    b[0][0] = i;
                    b[0][1] = j;
                    b[1][0] = k;
                    b[1][1] = l;

                    rep(n, 0, 3) { b[n][2] = h[n] - (b[n][0] + b[n][1]); }
                    rep(n, 0, 3) { b[2][n] = w[n] - (b[0][n] + b[1][n]); }

                    ll flag = 1;
                    rep(y, 0, 3) {
                        ll sum = 0;
                        rep(x, 0, 3) {
                            sum += abs(b[y][x]);
                            if (b[y][x] < 1) {
                                sum = -1e9;
                            }
                        }
                        if (sum != h[y]) {
                            flag = 0;
                            break;
                        }
                    }
                    rep(x, 0, 3) {
                        ll sum = 0;
                        rep(y, 0, 3) {
                            sum += abs(b[y][x]);
                            if (b[y][x] < 1) {
                                sum = -1e9;
                            }
                        }
                        if (sum != w[x]) {
                            flag = 0;
                            break;
                        }
                    }

                    if (flag and 0) {
                        rep(y, 0, 3) {
                            ll sum = 0;
                            rep(x, 0, 3) { cout << b[y][x] << ' '; }
                            cout << endl;
                        }
                        cout << endl;
                    }

                    if (flag) ans++;
                }
            }
        }
    }

    put(ans);
}