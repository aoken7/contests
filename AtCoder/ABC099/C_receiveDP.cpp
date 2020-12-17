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
    dp[n] = 1e9;

    rep(i,1,n+1){
        for(int pow6=1; pow6<=i; pow6*=6){
            dp[i] = min(dp[i], dp[i-pow6]+1);
        }
        for(int pow9=1; pow9<=i; pow9*=9){
            dp[i] = min(dp[i], dp[i-pow9]+1);
        }
    }

    put(dp[n]);

}