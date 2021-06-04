#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    rep(i,0,n) cin >> c[i];

    map<ll,ll> mp1;

    rep(i,0,n){
        mp1[a[i]]++;
    }

    map<ll,ll> mp2;
    rep(i,0,n){
        mp2[c[i]]++;
    }

    ll ans = 0;

    for(auto x:mp2){
        if(mp1.count(b[x.first-1])){
            ans += x.second * mp1[b[x.first-1]];
        }
    }

    put(ans);
}
