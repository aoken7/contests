#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<vector<ll>> a(m,vector<ll>(n));
    rep(i,0,n) rep(j,0,m) cin >> a[j][i];

    ll ans = 0;

    //for(auto x:a) for(auto y:x) cerr<<y<<" "; cerr<<endl;

    rep(j1,0,m){
        rep(j2,0,m){
            if(j1==j2) continue;
            ll tmp = 0;
            rep(i,0,n){
                tmp += max(a[j1][i],a[j2][i]);
            }
            ans = max(ans, tmp);
        }
    }
    put(ans);
}
