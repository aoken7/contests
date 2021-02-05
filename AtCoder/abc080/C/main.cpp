//pdf見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<vector<ll>> enu;

void dfs(ll d=0,vector<ll> v={}){
    if(d==10){
        if(v == vector<ll>(10,0)) return;
        enu.push_back(v);
        return;
    }
    auto x = v;
    x.push_back(0);
    dfs(d+1, x);
    v.push_back(1);
    dfs(d+1, v);
    
    return;
}

int main(){
    ll n; cin >> n;
    vector<vector<ll>> f(n,vector<ll>(10,0));
    rep(i,0,n) rep(j,0,10) cin >> f[i][j];    
    vector<vector<ll>> p(n,vector<ll>(11,0));
    rep(i,0,n) rep(j,0,11) cin >> p[i][j];

    dfs();

    ll ans = -1e9;

    for(auto x:enu){
        ll tmp = 0;
        rep(i,0,n){
            ll cnt = 0;
            rep(j,0,10){
                if(x[j] and f[i][j]) cnt++;
            }
            tmp += p[i][cnt];
        }
        ans = max(ans, tmp);
    }
    put(ans);
}
