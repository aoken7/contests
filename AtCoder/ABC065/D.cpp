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

struct V {
  ll s, t, w;
  bool operator<( const V& right) const{
      return w < right.w;
  }  
};


int main(){
    ll n; cin >> n;
    vector<V> a(n); 
    rep(i,0,n){
        cin >> a[i].s >> a[i].t;
        a[i].w = abs(a[i].s - a[i].t);
    }

    sort(all(a));

    for(auto x:a){
        cout << x.s << " "<< x.t << " " << x.w << endl;
    }
}