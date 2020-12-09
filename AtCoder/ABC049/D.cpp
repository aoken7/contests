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
    ll n, k, l; cin >> n >> k >> l;
    vector<ll> p(k), q(k);
    rep(i,0,k) cin >> p[i] >> q[i];
    vector<ll> r(l), s(l);
    rep(i,0,l) cin >> r[i] >> s[i];

    UnionFind R(n), L(n);

    rep(i,0,k){
        R.unite(p[i]-1, q[i]-1);
    }
    rep(i,0,l){
        ll x = r[i]-1, y = s[i]-1;
        L.unite(x,y);
    }

    map<pair<ll,ll>,ll> mp;
    rep(i,0,n) mp[{R.root(i),L.root(i)}]++;
    rep(i,0,n) cout << mp[{R.root(i), L.root(i)}] << " "; 
    cout << endl;
}