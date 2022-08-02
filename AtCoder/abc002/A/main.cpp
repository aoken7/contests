#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
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

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    
    UnionFind UF(10);
    UF.unite(1,1);
    UF.unite(2,3);
    rep(i,0,10){
        put(UF.root(i));
    }
}

