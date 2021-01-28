#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<vector<ll>> enu;

void dfs(ll n, ll m , ll c=0, vector<ll> v={}){
    if(c >= n){
        enu.push_back(v);
        return;
    }
    ll v_end;
    if(v.size() > 0) v_end = v[v.size()-1];
    else v_end = 1;
    rep(i,v_end,m+1){
        auto x = v;
        x.push_back(i);
        dfs(n, m,c+1,x);
    }
    return;
}

int main(){
    ll n, m, q; cin >> n >> m >> q;
    vector<ll> a(q), b(q), c(q), d(q);
    rep(i,0,q){ 
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--, b[i]--, c[i], d[i];
    }

    dfs(n,m);

    ll ans = 0;

    for(auto x:enu){
        ll tmp = 0;
        rep(i,0,q){
            if(x[b[i]] - x[a[i]] == c[i]){
                tmp += d[i];
            }
        }
        ans = max(ans, tmp);
    }
    put(ans);
}   
