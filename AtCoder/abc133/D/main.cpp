//解説放送見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll x2 = 0;
    rep(i,0,n){
        if(i%2) x2 -= a[i];
        else x2 += a[i];
    }
    vector<ll> ans(n);
    ans[0] = x2 / 2;
    rep(i,0,n-1){
        ans[i+1] = a[i] - ans[i];
    }
    rep(i,0,n) ans[i] *= 2;
    
    putl(ans);
}
