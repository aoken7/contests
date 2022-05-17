#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

struct UnionFind {
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


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, 0, m) cin >> a[i] >> b[i], a[i]--, b[i]--;
    
    UnionFind UF(n);
    map<ll,ll> mp;

    rep(i,0,m){
        mp[a[i]]++;
        mp[b[i]]++;
        if (mp[a[i]] > 2 or mp[b[i]] > 2){
            put("No");
            return 0;
        }

        if(UF.root(a[i]) == UF.root(b[i])){
            put("No");
            return 0;
        }

        UF.unite(a[i],b[i]);
    }

    put("Yes");
}
