#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define debug(i) cerr << fixed << i << endl
#define debugl(a)                      \
    for (auto x : a) cerr << x << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    map<ll, ll> mp;
    for (auto x : a) mp[x]++;

    ll ans = 0;
    ll cnt = 0;
    while (mp[0] > 0) {
        cnt++;
        if(cnt > k) break;
        rep(i, 0, n) {
            if(mp[i] == 0){
                ans += i;
                break;
            }else{
                mp[i]--;
            }
        }
    }

    put(ans);

    //for (auto x : mp) cout << x.first << ":" << x.second << " ";cout << endl;
}
