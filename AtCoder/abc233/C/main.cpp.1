#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<pair<long long, long long>> eratosthenes(long long N) {
    vector<pair<long long, long long>> res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;  // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

ll ans = 0;

ll dfs(ll idx, ll sum, const ll n, const ll x, const vector<vector<ll>> &st) {
    if (idx >= n) return 0;

    for (auto item : st[idx]) {
        if (sum * item > x) continue;

        dfs(idx + 1, sum * item, n, x, st);

        if (idx == n - 1 and sum * item == x) ans++;
    }
    return 0;
}

int main() {
    ll n, x;
    cin >> n >> x;

    vector<vector<ll>> st(n);
    rep(i, 0, n) {
        ll l;
        cin >> l;
        rep(j, 0, l) {
            ll a;
            cin >> a;
            if (gcd(a, x)) {
                st[i].push_back(a);
            }
        }
    }

    dfs(0, 1, n, x, st);

    put(ans);
}
