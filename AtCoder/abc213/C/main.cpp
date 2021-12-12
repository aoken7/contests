#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w, n;
    cin >> h >> w >> n;

    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];

    vector<ll> aa = a, bb = b;

    sort(all(aa));
    sort(all(bb));

    ll w_cnt = 0, h_cnt = 0;
    map<ll, ll> w_flag, h_flag;
    vector<ll> w_dp(n + 1, 0), h_dp(n + 1, 0);

    rep(i, 0, n) {
        if (w_flag[bb[i]]++ == 0) {
            w_dp[i + 1] = w_dp[i] + 1;
        }
        if (h_flag[aa[i]]++ == 0) {
            h_dp[i + 1] = h_dp[i] + 1;
        }
    }

    rep(i,0,n){
        cout << h_dp[i+1] << " " << w_dp[i+1] << endl; 
    }
}
