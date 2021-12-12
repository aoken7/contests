#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

set<ll> yaku;

void soinsu(ll x) {
    rep(i, 1, sqrt(x) + 1) {
        if (x % i == 0) {
            yaku.insert(i);
            yaku.insert(x / i);
        }
    }
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<bool> flag(m + 1, true);
    

    rep(i, 0, n) { soinsu(a[i]); }

    for(auto x : yaku){
        if(x==1) continue;
        for(ll i=x; i<=m; i+=x) flag[i]=false;
    }

    vector<ll> ans;

    rep(i,1,m+1){
        if(flag[i]) ans.push_back(i);
    }

    put(ans.size());
    for(auto x:ans) put(x);
}
