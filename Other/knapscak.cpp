#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, w; cin >> n >> w;
    vector<ll> value(n), weight(n);
    rep(i,0,n) cin >> value[i] >> weight[i];

    vector<vector<ll>> dp(n+1, vector<ll>(w+1,0));

    rep(i,0,n){
        rep(j,0,w+1){
            if(j >= weight[i]) dp[i+1][j] =  max(dp[i][j - weight[i]] + value[i], dp[i][j]);
            else dp[i+1][j] = dp[i][j];
        }
    }

    put(dp[n][w]);
}