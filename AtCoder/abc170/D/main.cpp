//解説見た
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
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    map<ll,ll> mp;
    for(auto x:a) mp[x]++;

    ll ans = 0;
    ll a_max = *max_element(all(a));
    vector<bool> dp(a_max+1,true);

    for(auto x:mp){
        ll j = x.first;
        for(ll i=x.first*2; i<=a_max; i+=j){
            //if(x.second > 1) break;
            dp[i] = false;
        }
    }

    for(auto x:mp){
        if(dp[x.first] and x.second < 2) ans++;
    }

    //rep(i,0,a_max) if(dp[i]) if(mp.count(i)) cout<<i<<" "; cout<<endl; 

    put(ans);
}
