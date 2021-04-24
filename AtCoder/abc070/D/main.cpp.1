//pdfみた、Kが固定ナノを読み落としていて解法が思いつかなかった。
//実際はただのDFSで難易度もそこまでだった。
#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;

vector<ll> d;
vector<vector<P>> g;

void dfs(ll node, ll dis=0){ 
    if(d[node] >= 0) return;
    d[node] = dis;
    for(auto x:g[node]){
        if(d[x.x] >= 0) continue;
        dfs(x.x,dis+x.y);
    }
    return;
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n-1), b(n-1), c(n-1);
    rep(i,0,n-1) cin >> a[i] >> b[i] >> c[i];
    ll q, k; cin >> q >> k;
    
    g = vector<vector<P>>(n+1);
    rep(i,0,n-1){
        g[a[i]].push_back({b[i],c[i]});
        g[b[i]].push_back({a[i],c[i]});
    }

    d = vector<ll>(n+2,-1);

    dfs(k);
    
    rep(i,0,q){
        ll x, y;
        cin >> x >> y;
        put(d[x]+d[y]);
    }
}
