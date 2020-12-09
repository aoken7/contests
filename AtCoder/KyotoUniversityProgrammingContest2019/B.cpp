//他の回答見た

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

struct UnionFind {
    //自身が親であれば、その集合に属する頂点数に-1を掛けたもの
    //そうでなければ親のid
    vector<int> r;
 
    UnionFind(int N) {
        r = vector<int>(N+1, -1);
    }
 
    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }
 
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }
 
    int size(int x) {
        return -r[root(x)];
    }
};

int main(){
    ll n, m, W;
    cin >> n >> m >> W;
    vector<ll> w(n), v(n);
    rep(i,0,n) cin >> w[i] >> v[i];

    UnionFind UF(n);
    vector<ll> w2(n,0), v2(n,0);

    rep(i,0,m){
        ll a, b; cin >> a >> b;
        a--; b--;
        UF.unite(a,b);
    }

    rep(i,0,n){
        w2[UF.root(i)] += w[i];
        v2[UF.root(i)] += v[i];
    }

    vector<vector<ll>> dp(n+1,vector<ll>(W+1,0));

    rep(i,0,n){
        rep(j,0,W+1){
            if(w2[i] == 0 && v2[i] == 0){
                dp[i+1][j] = dp[i][j];
            }else if(j<w2[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j], dp[i][j-w2[i]]+v2[i]);
            }
        }
    }

    put(dp[n][W]);
}