//pdf見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct fenwick_tree {
    typedef int T;
    T n;
    vector<T> bit;

    // 各要素の初期値は 0
    fenwick_tree(T num) : bit(num+1, 0) { n = num; }

    // a_i += w
    void add(T i, T w) {
        for (T x = i; x <= n; x += x & -x) {
            bit[x] += w;
        }
    }
    // [1, i] の和を計算.
    T sum(T i) {
        T ret = 0;
        for (T x = i; x > 0; x -= x & -x) {
            ret += bit[x];
        }
        return ret;
    }
    // [left+1, right] の和を計算.
    T sum(T left, T right) {
        return sum(right) - sum(left);
    }
};

int main(){
    ll n; cin >> n;
    deque<ll> a(n);
    rep(i,0,n) cin >> a[i], a[i]++;

    ll ans = 0;
    fenwick_tree f_tree(n);
    
    rep(i,0,n){
        ans += i - f_tree.sum(a[i]);
        f_tree.add(a[i], 1);
    }

    rep(i,0,n){
        put(ans);
        ans += n-1-2*(a[i]-1);
    }
}
