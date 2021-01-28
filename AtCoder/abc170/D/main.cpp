#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<ll> prime(ll x){
    vector<ll> ret;
    rep(i,1,sqrt(x)+1){
        if(x % i == 0){
            ret.push_back(i);
            if(x/i!=x)
                ret.push_back(x/i);
        }
    }
    return ret;
}

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
        for(ll i=x.first*2; i<=a_max; i*=2){
            dp[i] = false;
        }
    }

    for(auto x:mp){
        if(dp[x.first] and x.second < 2) ans++;
    }

    rep(i,0,a_max) if(!dp[i]) put(i); 

    put(ans);
}
