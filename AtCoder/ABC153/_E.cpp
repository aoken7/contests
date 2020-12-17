//他人の解答みて解答


#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll hp, n_len; cin >> hp >> n_len;
    vector<ll> a_atk(n_len), b_mp(n_len);
    rep(i, n_len) cin >> a_atk[i] >> b_mp[i];

    vector<ll> dp(hp+1,1e9);
    dp[0] = 0;
    for(ll i=0; i<n_len; i++){
        for(ll j=0; j<hp+1; j++){
            ll x = min(hp, j + a_atk[i]);
            dp[x] = min(dp[x], dp[j] + b_mp[i]);
            //cout << "x:" << x << " dp:" << dp[x] << endl;
        }
    }

    put(dp[hp]);
}