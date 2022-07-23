#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> x(n);
    rep(i, 0, n) cin >> x[i];
    vector<pair<ll, ll>> cy(m);
    rep(i, 0, m) {
        ll c, y;
        cin >> c >> y;
        cy[i] = {c, y};
    }

        
}
