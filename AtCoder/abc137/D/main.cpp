#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> ab(n);
    rep(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        ab[i] = {a, b};
    }

    sort(all(ab), greater<pair<ll, ll>>());

    ll ans = 0;
    priority_queue<ll> q;

    ll cnt = 0;
    for (ll i = m; i > 0; i--) {
        if(cnt >= n) break;
        if (ab[cnt].first <= i) {
            q.push(ab[cnt].second);
        }
        cnt++;
    }

    rep(i, 0, m) {
        if(q.empty()) break;
        ans += q.top();
        q.pop();
    }

    put(ans);
}
