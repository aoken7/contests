#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll n, m; 
vector<ll> a; 
vector<vector<ll>> g;   

//ansはmin,maxで格納
pair<ll,ll> dfs(ll node, pair<ll,ll> ans){
    if(g[node].size() < 1) return ans;

    if(a[node] < ans.first) ans.first = a[node];
    if(a[node] > ans.second) ans.second = a[node];

    pair<ll,ll> ret = ans;

    for(auto x:g[node]){
        auto tmp = dfs(x, ans);
        if(ret.second-ret.first < tmp.second-tmp.first){
            ret = tmp;
        }
    }
    return ret;
}

int main(){
    cin >> n >> m;
    a = vector<ll>(n);
    rep(i,0,n) cin >> a[i];
    g = vector<vector<ll>>(n);
    rep(i,0,m){
        ll x,y; cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
    }

    auto ans = dfs()
}
