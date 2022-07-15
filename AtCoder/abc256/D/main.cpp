#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    vector<ll> table(2e5 + 2, 0);

    rep(i, 0, n) {
        ll l, r;
        cin >> l >> r;
        table[l]++;
        table[r]--;
    }

    rep(i, 1, table.size()) { table[i] += table[i - 1]; }

    ll l = -1;
    rep(i, 0, table.size()) {
        if (table[i] != 0 and l < 0) {
            l = i;
        } else if (table[i] == 0) {
            if (l > 0) {
                cout << l << " " << i << endl;
                l = -1;
            }
        }
    }
}
