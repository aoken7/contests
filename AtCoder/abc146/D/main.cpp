//解説見た
#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<vector<ll>> g;
map<pair<ll,ll>,ll> ans;
map<ll,ll> mp;
ll maxn = 0;

void dfs(ll node=1, ll pre=-1){
    mp[node]++;
    ll i = 1;
    for(auto x:g[node]){
        if(mp.count(x)) continue; 
        if(i==pre) i++;
        dfs(x,i);
        maxn = max(maxn,i);
        ans[{min(node,x),max(node,x)}]=i;
        i++;
    }
    return;
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n-1), b(n-1);
    g = vector<vector<ll>>(n+1);
    rep(i,0,n-1){
        cin >> a[i] >> b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    dfs();

    put(maxn);
    rep(i,0,n-1){
        put((ans[{a[i],b[i]}]));
    }
}
