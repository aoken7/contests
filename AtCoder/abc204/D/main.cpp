//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> t(n);
    rep(i,0,n) cin >> t[i];

    bitset<100001> dp;
    dp[0] = 1;
    int sum = 0;
    rep(i,0,n){
        sum += t[i];
        dp |= dp<<t[i];
    }

    ll ans = sum;
    rep(i,0,sum+1){
        if (dp[i]) ans = min(ans, max(i, sum-i));
    }
    put(ans);
}
