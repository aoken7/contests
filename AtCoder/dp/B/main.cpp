#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

const ll INF = 1e9;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> h(n);
    rep(i,0,n) cin >> h[i];

    vector<ll> dp(n+1, INF);
    dp[0] = 0;

    rep(i,0,n-1){
        rep(j,1,k+1){
            if (i + j >= n) break;
            dp[i+j] = min(dp[i+j], dp[i] + abs(h[i]-h[i+j]));
        }
    }

    put(dp[n-1]);
}
