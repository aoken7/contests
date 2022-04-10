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
    for (auto x : a) {
        mp[x]++;
    }
    for (auto x : b) {
        mp[x]++;
    }

    for(auto x:mp){
        if (x.second == n-1){
            put("Yes");
            return 0;
        }
    }
    put("No");
}
