#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll ans = (n * (n-1)) / 2;

    map<ll,ll> mp;
    rep(i,0,n) mp[a[i]]++;

    for(auto x:mp){
        ans -= (x.second * (x.second - 1)) / 2;
    }
    
    put(ans);
}
