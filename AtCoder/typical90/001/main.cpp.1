#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

ll n, l, k;
vector<ll> a, b;

// 1ブロックをx以上に出来るか
int solve(ll x) {
    ll sum = 0;
    ll cnt = 0;
    ll i = 0;
    for (; i < b.size(); i++) {
        if (sum >= x) {
            cnt++;
            sum = 0;
        }
        if (cnt == k) break;
        sum += b[i];
    }
    sum = 0;
    for (; i < b.size(); i++) {
        sum += b[i];
    }

    if (sum < x) return false;
    return true;
}

int megru_search() {
    ll ok = 0;        //最小値求めるときは ok = INF
    ll ng = 1e9 + 7;  //                   ng = -1
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if (solve(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}

int main() {
    cin >> n >> l;
    cin >> k;
    a = b = vector<ll>(n);
    rep(i, 0, n) cin >> a[i];

    b[0] = a[0];
    rep(i, 0, n - 1) { b[i + 1] = a[i + 1] - a[i]; }
    b.push_back(l - a[n - 1]);

    ll ans = megru_search();
    // putl(b);

    // put(solve(14));

    put(ans);
}
