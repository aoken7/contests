//pdfみた

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
        r = vector<int>(N, -1);
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
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(m), b(m), c(k), d(k);
    rep(i,0,m) cin >> a[i] >> b[i];
    rep(i,0,k) cin >> c[i] >> d[i];

    vector<vector<ll>> graph(n+1);
    rep(i,0,m){
        graph[a[i]].push_back(b[i]);
        graph[b[i]].push_back(a[i]);
    }

    rep(i,0,k){
        graph[c[i]].push_back(d[i]);
        graph[d[i]].push_back(c[i]);
    }


    UnionFind F(n+1);

    rep(i,0,m){
        F.unite(a[i], b[i]);
    }

    rep(i,1,n+1){
        ll cnt = F.size(i);
        for(auto x:graph[i]){
            if(F.root(i) == F.root(x)){
                cnt--;
            }
        }
        cout << (cnt-1) << " ";
    }
    cout << endl;
}