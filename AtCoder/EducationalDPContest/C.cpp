//kaisetumita

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll n;
vector<ll> a, b, c;
vector<vector<ll>> dp;

int main(){
    cin >> n;
    a = b = c = vector<ll>(n+1);
    dp = vector<vector<ll>>(n+1,vector<ll>(3,0));
    rep(i,1,n+1) cin >> a[i] >> b[i] >> c[i];

    rep(i,1,n+1){
        dp[i][0] = max(dp[i-1][1]+a[i], dp[i-1][2]+a[i]);
        dp[i][1] = max(dp[i-1][0]+b[i], dp[i-1][2]+b[i]);
        dp[i][2] = max(dp[i-1][0]+c[i], dp[i-1][1]+c[i]);
    }
    put(max({dp[n][0], dp[n][1], dp[n][2]}));
}