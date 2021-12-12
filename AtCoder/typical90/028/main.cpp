#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    vector<vector<ll>> table(1001, vector<ll>(1001, 0));

    rep(i, 0, n) {
        ll lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;

        table[ly][lx]++;
        table[ly][rx]--;
        table[ry][lx]--;
        table[ry][rx]++;
    }

    rep(i, 0, 1001) {
        rep(j, 1, 1001) { table[i][j] += table[i][j - 1]; }
    }
    rep(i, 1, 1001) {
        rep(j, 0, 1001) { table[i][j] += table[i - 1][j]; }
    }

    vector<ll> ans(n+1, 0);

    rep(i, 0, 1001) {
        rep(j, 0, 1001) { ans[table[i][j]]++; }
    }

    rep(i,1,n+1) put(ans[i]);
}
