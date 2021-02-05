#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<vector<ll>> enu;
vector<ll> c, d;
ll k; 

void dfs(ll deep=0, vector<ll> v={}){
    if(deep >= k){
        enu.push_back(v);
        return;
    }

    auto x = v;
    x.push_back(c[deep]);
    v.push_back(d[deep]);
    dfs(deep+1, x);
    dfs(deep+1, v);
    
    return;
}

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i,0,m) cin >> a[i] >> b[i];
    cin >> k;
    c = d = vector<ll>(k);
    rep(i,0,k) cin >> c[i] >> d[i];

    dfs();

    ll ans = 0;

    for(auto x:enu){
        ll tmp = 0;
        map<ll,ll> mp;
        for(auto y:x) mp[y]++;
        rep(i,0,m){
            if(mp[a[i]] and mp[b[i]]) tmp++;
        }
        ans = max(ans, tmp);
    }
    put(ans);
}
