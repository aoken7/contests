//解説放送観た
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, m;
vector<pair<ll, ll>> ab;

ll solve(queue<pair<ll, ll>> pair_q) {
    ll ans = 0;
    priority_queue<ll> q;
    for (ll i = m - 1; i >= 0; i--) {
        while (!pair_q.empty()) {
            if (pair_q.front().first + i <= m) {
                q.push(pair_q.front().second);
                pair_q.pop();
            } else {
                break;
            }
        }
        if(!q.empty()) ans += q.top(), q.pop();
    }
    return ans;
}

int main() {
    cin >> n >> m;
    ab = vector<pair<ll, ll>>(n);
    rep(i, 0, n) cin >> ab[i].first >> ab[i].second;

    sort(all(ab));
    queue<pair<ll, ll>> q;
    for (auto x : ab) q.push(x);

    ll ans = solve(q);

    put(ans);
}
