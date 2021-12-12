#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct UnionFind {
    vector<int> r;

    UnionFind(int N) { r = vector<int>(N + 1, -1); }

    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }

    int size(int x) { return -r[root(x)]; }
};

int main() {
    ll h, w;
    cin >> h >> w;

    auto a = vector<vector<ll>>(h + 2, vector<ll>(w + 2, 0));

    UnionFind UF((h + 1) * (w + 1));

    ll q;
    cin >> q;
    rep(i, 0, q) {
        ll t;
        cin >> t;
        if (t == 1) {
            ll r, c;
            cin >> r >> c;
            a[r][c] = 1;
            if (a[r - 1][c] == 1) {
                UF.unite(c + w * (r - 1), c + w * (r - 1) - 1);
                //cout << "1 (" << r << "," << c << ")" << endl;
            }
            if (a[r + 1][c] == 1) {
                UF.unite(c + w * (r - 1), c + w * (r - 1) + 1);
                //cout << "2 (" << r << "," << c << ")" << endl;
            }
            if (a[r][c - 1] == 1) {
                UF.unite(c + w * (r - 1), c + w * (r - 2));
                //cout << "3 (" << r << "," << c << ")" << endl;
            }
            if (a[r][c + 1] == 1) {
                UF.unite(c + w * (r - 1), c + w * (r));
                /*cout << "4 (" << r << "," << c
                     << "):" << UF.root(r + c * (r - 1)) << " "
                     << UF.root(r + c * (r)) << " " << r + c * (r) << endl;*/
            }
        } else {
            ll ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            if (UF.root(ca + w * (ra - 1)) == UF.root(cb +  w * (rb - 1)) and
                a[ra][ca] and a[rb][cb]) {
                put("Yes");
            } else {
                put("No");
            }
        }
        //cout << endl;
        for (auto x : a) {
            for (auto y : x) {
                //cout << y << " ";
            }
            //cout << endl;
        }
        //cout << "------------" << endl;
    }

    return 0;

    cout << endl;
    for (auto x : a) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    // cout << UF.root(8) << " " << UF.root(5) << endl;;
}
