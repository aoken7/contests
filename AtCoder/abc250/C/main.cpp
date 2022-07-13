#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> x(q);
    rep(i, 0, q) cin >> x[i];

    map<ll, ll> key2idx;
    vector<ll> key(n);
    rep(i, 0, n) {
        key2idx[i] = i;
        key[i] = i;
    }

    rep(i, 0, q) {
        ll k = key2idx[x[i]];
        swap(key[k], key[(k + 1) % n]);
        key2idx[key[k]] = k + 1;
        key2idx[key[k + 1]] = k;
    }

    for (auto x : key) {
        cout << x << " ";
    }
    cout << endl;
}
