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
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    //オーダが小さいのでDPでできそう
    ll dp[n + 1][3001];
    fill(dp[0], dp[n+1], 0);

    for (ll i = 0; i < n; i++) {
        for (ll c = a[i]; c <= b[i]; c++){
            
        }
    }
}
