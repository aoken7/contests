#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    for (;;) {
        ll n;
        cin >> n;

        if (n == 0) break;

        vector<vector<ll>> c(n);

        ll nokori = n;

        vector<ll> flag(n, 1);
        rep(i, 0, n) {
            ll x, y;
            cin >> x >> y;

            // index 0を小さくしておく
            if (y < x) swap(x, y);

            if (x == y) {
                flag[i] = 0;
                nokori--;
            } else {
                c[i] = {x, y};
            }
        }

        ll ans = 0;

        for (ll cnt = 0; nokori > 0; cnt++) {
            ll p = cnt % n;

            if (!flag[p]) continue;
            // cout << "p: " << p << " flag: " << flag[p] << endl;

            for (ll i = 1; i < 5 * n; i++) {
                // cout << flag[(p + i) % n] << " " << p  <<  " " << (p+i) % n
                // << endl;;
                if (!flag[(p + i) % n]) continue;
                if (p == (p + i) % n) continue;
                // cout << "i:" << i << endl;

                ans++;
                if (c[(p + i) % n][0] == c[p][0]) {
                    c[(p + i) % n].erase(c[(p + i) % n].begin());
                    //カードの移動先が0枚なら削除
                    if (c[(p + i) % n].size() == 0) {
                        flag[(p + i) % n] = 0;
                        nokori--;
                    }
                } else if (c[(p + i) % n].size() > 1 and
                           c[(p + i) % n][1] == c[p][0]) {
                    c[(p + i) % n].erase(c[(p + i) % n].begin()+1);
                    //カードの移動先が0枚なら削除
                    if (c[(p + i) % n].size() == 0) {
                        flag[(p + i) % n] = 0;
                        nokori--;
                    }
                } else {
                    c[(p + i) % n].emplace_back(c[p][0]);
                    sort(all(c[(p + i) % n]));
                }
                c[p].erase(c[p].begin());
                if (c[p].size() == 0) {
                    flag[p] = 0;
                    nokori--;
                }
                p = (p + i) % n;
                break;
            }

            /*
            for (auto y : c) {
                if (y.size() == 0) continue;

                for (auto x : y) {
                    cout << x << " ";
                }
                cout << endl;
            }
            cout << endl;
            for (auto x : flag) cout << x << " ";
            cout << endl;
            cout << "----" << endl;
            */
            // if (c.size() < 3) return 0;
        }

        put(ans);
    }
}