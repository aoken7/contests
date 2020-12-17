#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> h(n); rep(i,0,n) cin >> h[i];

    vector<ll> dp(n+1,1e9);
    dp[0] = 0;

    rep(i,0,n){
        rep(j,0,k){
            if(i+j > n-1) break;
            dp[i+j+1] = min(dp[i+j+1], dp[i] + abs(h[i]-h[i+j+1]));
        }
    }
    put(dp[n-1]);
    //putl(dp);
}