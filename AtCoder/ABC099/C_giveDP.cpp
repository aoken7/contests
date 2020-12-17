#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    
    vector<ll> dp(1e6,n);
    dp[0] = 0;

    rep(i,0,n){
        for(ll pow6=1; pow6 + i <= n; pow6 *= 6){
            dp[i + pow6] = min(dp[i+pow6], dp[i]+1);
        }
        for(ll pow9=1; pow9 + i <= n; pow9 *= 9){
            dp[i + pow9] = min(dp[i+pow9], dp[i]+1);
        }
    }
    put(dp[n]);
}