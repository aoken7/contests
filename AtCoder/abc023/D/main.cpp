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
    vector<pair<ll,ll>> a(n);
    rep(i,0,n) cin >> a[i].first >> a[i].second;

    vector<ll> y(n);
    rep(i,0,n){
        y[i] = a[i].first + (n-1)*a[i].second;
    }

    put(*min_element(all(y)));
}
