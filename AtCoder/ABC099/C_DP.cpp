#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

set<ll> a;
vector<ll> dp;

ll fun(ll i){
    ll ret = 1e9;
    if(dp[i] > -1) return dp[i];
    if(i == 0) return 0;
    for(auto x:a){
        if (i - x >= 0) ret = min(ret, fun(i-x) + 1);
    }
    return dp[i] = ret;
}

int main(){
    ll n; cin >> n;
    dp = vector<ll>(n+1,-1);
    
    rep(i,0,8) a.insert(pow(6,i)), a.insert(pow(9,i));

    put(fun(n));
}