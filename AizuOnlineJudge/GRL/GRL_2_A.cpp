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

struct G {
  ll s, t, w;
  bool operator<( const G& right) const{
      return w < right.w;
  }  
};

int main(){
    ll v, e; cin >> v >> e;
    vector<G> a(e);
    rep(i,0,e){
        cin >> a[i].s >> a[i].t >> a[i].w;
    }

    sort(all(a));

    ll ans = 0;
    UnionFind UF(v+1);

    rep(i,0,e){
        if(UF.root(a[i].s) != UF.root(a[i].t)){
            UF.unite(a[i].s, a[i].t);
            ans += a[i].w;
        }
    }

    put(ans);
}