//解説観た
//累積和だとは思ったけどとり方がわからなかった

#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll h, w, d;
    cin >> h >> w >> d;
    map<ll,pair<ll,ll>> a;
    rep(y,1,h+1){
        rep(x,1,w+1){
            ll tmp; cin >> tmp;
            a[tmp] = {x,y};
        }
    }

    vector<ll> wa(1e5,0);

    rep(i,d+1, h*w+1){
        wa[i] = wa[i-d] + abs(a[i].first - a[i-d].first) + abs(a[i].second - a[i-d].second);
    }

    ll q; cin >> q;
    rep(i,0,q){
        ll l, r; cin >> l >> r;
        put(wa[r]-wa[l]);
    }
}
