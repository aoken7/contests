#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;


ll n, W;
vector<ll> w, v;
vector<vector<ll>> dp;

ll fun(ll i, ll j){
    if(dp[i][j] > -1) return dp[i][j];

    ll ret;
    if(i == n){
        ret = 0;
    }else if(j < w[i]){
        ret = fun(i+1,j);
    }else{
        ret = max(fun(i+1,j), fun(i+1,j-w[i])+v[i]);
    }

    return dp[i][j] = ret;
}

int main(){
    cin >> n >> W;
    w = v = vector<ll>(n);
    rep(i,0,n) cin >> w[i] >> v[i];

    dp = vector<vector<ll>>(n+1,vector<ll>(W+1,-1));

    put(fun(0,W));
}