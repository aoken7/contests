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

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    auto b = a;
    sort(all(b));
    if (a == b){
        put("Yes");
        return 0;
    }

    vector<vector<ll>> v(k);
    rep(i, 0, k) {
        rep(j, 0, n - k+1) {
            if (i+k * j >= n) continue;
            v[i].emplace_back(a[i + k * j]);
        }
    }


    for(auto x:v){
        //putl(x);
    }

    rep(i,0,v.size()){
        sort(all(v[i]));
    }

    vector<ll> ans;

    rep(i,0,v[0].size()){
        rep(j,0,v.size()){
            if (v[j].size() <= i) continue;
            ans.emplace_back(v[j][i]);
            //cout << v[j][i] << " ";
        }
    }
    //cout << endl;

    sort(all(a));

    rep(i,0,n){
        if (a[i] != ans[i]){
            put("No");
            return 0;
        }
    }

    put("Yes");

}
