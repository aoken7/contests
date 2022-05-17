#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, q; 
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    sort(all(a));

    rep(i,0,q){
        ll x; 
        cin >> x;
        ll ans = a.size() - distance(a.begin(), lower_bound(all(a), x));
        put(ans);
    }
}
