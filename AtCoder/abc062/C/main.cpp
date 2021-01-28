//pdf見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll h, w; cin >> h >> w;

    ll ans = 1e9;

    rep(i,1,h){
        ll sa = i * w;
        ll sb = (h-i)*ceil(w/2.0);
        ll sc = (h-i)*floor(w/2.0);
        ans = min(ans, max({sa,sb,sc})-min({sa,sb,sc}));
    }

    rep(i,1,h){
        ll sa = i * w;
        ll sb = w*ceil((h-i)/2.0);
        ll sc = w*floor((h-i)/2.0);
        ans = min(ans, max({sa,sb,sc})-min({sa,sb,sc}));
    }

    rep(i,1,w){
        ll sa = i * h;
        ll sb = (w-i)*ceil(h/2.0);
        ll sc = (w-i)*floor(h/2.0);
        ans = min(ans, max({sa,sb,sc})-min({sa,sb,sc}));
    }

    rep(i,1,w){
        ll sa = i * h;
        ll sb = h*ceil((w-i)/2.0);
        ll sc = h*floor((w-i)/2.0);
        ans = min(ans, max({sa,sb,sc})-min({sa,sb,sc}));
    }
    

    put(ans);
}
