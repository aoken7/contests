#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];

    map<ll, ll> mp;
    rep(i, 0, n) {
        mp[a[i]]++;
        mp[a[i] + b[i]]--;
    }

    for (auto it = mp.begin(); it != mp.end()--;) {
        auto cur = (*it).first;
        auto next = (*++it).first;
        if (it == mp.end()) break;

        mp[next] += mp[cur];
    }

    map<ll, ll> cnt;

    for (auto it = mp.begin(); it != mp.end()--;) {
        auto cur_first = (*it).first;
        auto cur_secand = (*it).second;
        it++;
        auto next_first = (*it).first;
        auto next_second = (*it).second;
        if (it == mp.end()) break;

        cnt[cur_secand] += next_first - cur_first;
        //mp[next] += mp[cur];
    }

    rep(i, 1, n + 1) { cout << cnt[i] << ' '; }
    cout << endl;
}
