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

const ll mod = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    map<ll, ll> mp;
    rep(i, 0, n) { mp[a[i]]++; }

    vector<pair<ll, ll>> b;
    for (auto x : mp) {
        b.push_back({x.first, x.second});
    }

    ll ans = 0;
    vector<ll> sum(b.size() + 1, 0);
    rep(i, 0, b.size()) { sum[i + 1] = sum[i] + b[i].second; }

    vector<ll> memo(b.size());
    rep(i, 0, b.size()) {
        memo[i] = b[i].second * (sum[b.size()] - sum[i + 1]);
    }

    vector<ll> sum2(b.size() + 1, 0);
    rep(i, 0, b.size()) { sum2[i + 1] = sum2[i] + memo[i]; }

    //putl(memo);

    rep(i, 0, b.size()) {
        ans += b[i].second * (sum2[b.size()] - sum2[i+1]);
        //cout << b[i].first << ": ";
        //put(b[i].second * (memo[b.size()] - memo[i+1]));
        //put(sum2[b.size()] - sum2[i+1]);
    }

    put(ans);

    return 0;

    //ナイーブ
    rep(i, 0, b.size() - 2) {
        cout << b[i].first << " : ";
        rep(j, i + 1, b.size() - 1) {
            ans += b[i].second * b[j].second * (sum[b.size()] - sum[j + 1]);
            cout << b[j].second * (sum[b.size()] - sum[j + 1]) << " ";
        }
        cout << endl;
    }

    put(ans);
}
