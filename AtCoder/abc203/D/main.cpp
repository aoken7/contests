#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(n));

    rep(x, 0, n) {
        rep(y, 0, n) { cin >> a[y][x]; }
    }




    rep(x, 0, n) {
        rep(y, 0, n) { cout << a[y][x]; }
        cout << endl;
    }
}
