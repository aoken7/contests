#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    rep(i,0,n) cin >> a[i];
    rep(i,0,m) cin >> b[i];

    sort(all(a));
    sort(all(b));

    ll ans = 1e18;

    rep(i,0,m){
        decltype(b)::iterator it = lower_bound(all(a), b[i]);
        if (*it == 0) continue;
        ans = min(ans, abs(*it - b[i]));
    }

    rep(i,0,n){
        decltype(b)::iterator it = lower_bound(all(b), a[i]);
        if (*it == 0) continue;
        ans = min(ans, abs(*it - a[i]));
    }

    put(ans);
}
