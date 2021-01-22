#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<vector<ll>> dp(n, vector<ll>(n,1e9));
    rep(i,0,m){
        ll a,b,t;
        cin >> a >> b >> t;
        dp[a-1][b-1] = t;
        dp[b-1][a-1] = t;
    }

    rep(k,0,n){
        rep(i,0,n){
            rep(j,0,n){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    ll ans = 1e9;

    rep(i,0,n){
        ll tmp = 0;
        rep(j,0,n){
            if(i==j) continue;
            tmp = max(tmp, dp[i][j]);
        }
        ans = min(ans, tmp);
    }

    put(ans);
    debug(ans);
}   