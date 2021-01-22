#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll h, w; cin >> h >> w;
    ll maxn = 0;
    ll minn = 1e9;
    ll a[w][h];
    
    rep(i,0,h){
        rep(j,0,w){
            ll tmp; cin >> a[j][i];
            minn = min(minn, a[j][i]);
        }
    }

    ll ans = 0;

    rep(i,0,h){
        rep(j,0,w){
            ans += a[j][i] - minn;
        }
    }

    put(ans);
}