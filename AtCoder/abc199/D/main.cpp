#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<vector<ll>> g;

int main() {
    ll n, m;
    cin >> n >> m;

    g = vector<vector<ll>>(n + 1);

    rep(i, 0, m) {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    
}
