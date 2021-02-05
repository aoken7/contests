//pdf見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    
    vector<ll> b(n);
    rep(i,0,n) b[i] = a[i]-i-1;

    ll median;
    sort(all(b));
    median = (b[ll(floor((n-1)/2.0))] + b[ll(ceil((n-1)/2.0))]) / 2;

    rep(i,0,n){
        a[i] = abs(a[i] - (median+i+1));
    }

    ll ans = accumulate(all(a),0LL);
    put(ans);

}
