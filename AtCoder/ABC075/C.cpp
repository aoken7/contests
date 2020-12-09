#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

set<ll> flag;

ll dfs(vector<vector<ll>> g, ll node, ll maxn){

    if (flag.size() >= maxn or flag.find(node) != flag.end()){
        return flag.size();
    }
    
    flag.insert(node);
    ll ret = 0;
    for (auto x:g[node]){
        ret = max(ret,dfs(g, x, maxn));
    }

    return ret;
}

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];


    ll ans = 0;

    rep(j,m){
        vector<vector<ll>> graph(n+1);
        rep(i, m){
            if(j != i){
                graph[a[i]].push_back(b[i]);
                graph[b[i]].push_back(a[i]);
            }
        }
        flag.clear();
        if (n != dfs(graph, 1, n)){
            ans++;
        }
    }
    
    put(ans);
}