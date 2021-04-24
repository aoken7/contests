#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, m, q;
    cin >> n >> m >> q;
    vector<pair<ll, ll>> wv(n);
    rep(i, 0, n) cin >> wv[i].first >> wv[i].second;
    vector<ll> x(m);
    rep(i, 0, m) cin >> x[i];

    sort(all(wv), compare_by_b);
    reverse(all(wv));

    //for (auto z : wv) {cout << "(" << z.first << "," << z.second << ") ";}cout << endl;

    rep(i, 0, q) {
        ll l, r;
        cin >> l >> r;
        l--, r--;

        vector<pair<ll, ll>> box;
        rep(j, 0, m) {
            if (j < l or r < j) {
                box.push_back({x[j], 0});
            }
        }
        sort(all(box));

        //for (auto z : box) {cout << "(" << z.first << "," << z.second << ") ";}cout << endl;

        ll cnt = 0;
        rep(j, 0, n) {
            rep(k, 0, box.size()) {
                //cout << "box:" << box[k].first << " " << "wv:" << wv[j].first << endl; 
                if (box[k].second == 0 and box[k].first >= wv[j].first) {
                    box[k].second = wv[j].second;
                    break;
                }
            }
        }

        //for (auto z : box) {cout << "(" << z.first << "," << z.second << ") ";}cout << endl;

        ll ans = 0;
        for (auto y : box) {
            ans += y.second;
        }
        put(ans);
    }
}
