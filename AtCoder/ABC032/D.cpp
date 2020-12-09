#include <bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto x : a) cout << x << ' '; \
    cout << endl
using namespace std;
using ll = long long;

ll N, W;
vector<ll> v, w;
map<pair<ll, ll>, ll> dp;
vector<vector<ll>> d;

ll fun(ll i, ll j) {
    //auto pa = make_pair(i, j);
    //if (dp.count(pa)) {return dp[pa];}
    if(j < sqrt(W) and d[i][j] > -1) return d[i][j];

    ll res;
    if (i == N) {
        res = 0;
    } else if (j < w[i]) {
        res = fun(i + 1, j);
    } else {
        res = max(fun(i + 1, j), fun(i + 1, j - w[i]) + v[i]);
    }
    
    if(j < sqrt(W)) d[i][j] = res;
    return res;
    //return dp[pa] = res;
}

int main() {
    cin >> N >> W;
    v = vector<ll>(N), w = vector<ll>(N);
    rep(i, 0, N) cin >> v[i] >> w[i];

    d = vector<vector<ll>>(N+1, vector<ll>(sqrt(W),-1));

    put(fun(0,W));
}