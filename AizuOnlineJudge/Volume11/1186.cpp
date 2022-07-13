#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    map<pair<ll, ll>, ll> mp;

    rep(i, 1, 150) {
        rep(j, i + 1, 150) {
            ll key = i * i + j * j;
            mp[{i, j}] = key;
        }
    }

    for (;;) {
        ll h, w;
        cin >> h >> w;

        if (h + w == 0) break;

        ll taikaku = h * h + w * w;

        pair<ll, ll> idx = {1e9, 1e9};
        ll minn = 1e9;
        for (auto x : mp) {
            if (x.second > taikaku) {
                if (minn > x.second) {
                    minn = x.second;
                    idx = x.first;
                } else if (x.second == taikaku) {
                    if (x.first.first > h) {
                        if (minn > x.second) {
                            minn = x.second;
                            idx = x.first;
                        }
                    }
                } else if (minn == x.second and idx.first > x.first.first) {
                    minn = x.second;
                    idx = x.first;
                }
            }
        }

        cout << idx.first << " " << idx.second << endl;
    }
}