//回答見た
//初め2分探索かと思ったがわからず尺とりで出来ないか考えてた。

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    rep(i,0,n) cin >> c[i];

    sort(all(a));
    sort(all(b));
    sort(all(c));

    ll ans = 0;
    rep(j,0,n){
        ll x = lower_bound(all(a),b[j]) - a.begin();
        ll y = n - (upper_bound(all(c),b[j])-c.begin());
        ans += x*y;
    }

    put(ans);
}