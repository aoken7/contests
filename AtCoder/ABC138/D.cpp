#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

void dfs(ll root, vector<ll> &ans, vector<vector<ll>> graph, ll add){
    if(graph[root].size() == 0){
        ans[root] += add;
        return;
    }
    ans[root] += add;
    for(auto x:graph[root]){
        dfs(x, ans, graph, ans[root]);
    }
    return;
}

int main(){
    ll n, q; cin >> n >> q;
    vector<ll> a(n-1), b(n-1);
    rep(i,n-1) cin >> a[i] >> b[i];
    vector<ll> ans(n+1,0);
    rep(i,q){
        ll c, d; cin >> c >> d;
        ans[c] += d;
    }

    vector<vector<ll>> graph(n+1);
    rep(i,n-1){
        graph[a[i]].push_back(b[i]);
    }

    dfs(1,ans,graph,0);

    for(ll i=1; i<=n; i++){
        cout << ans[i] << " ";
    }cout << endl;
}