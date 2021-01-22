#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    ll a_max = 0, b_max = 0;
    
    vector<ll> a_dp(n+1,0);

    rep(i,0,n){
        a_max = max(a_max, a[i]);
        b_max = max(b_max, b[i]);
        a_dp[i+1] = max(a_dp[i], a_max * b[i]);
        put(max(a_max * b[i], a_dp[i+1]));
    } 
}
