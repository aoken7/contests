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
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<ll> tmp;
    rep(i,0,n){
        rep(j,0,tmp.size()){
            tmp[j] = (tmp[j] + a[i]) % 360;
        }
        tmp.push_back(a[i]);
        //putl(tmp);
    }
    tmp.push_back(0);
    tmp.push_back(360);

    sort(all(tmp));

    ll ans = 0;
    rep(i,0,tmp.size()-1){
        if (tmp[i+1] - tmp[i] > ans){
            ans = tmp[i+1] - tmp[i];
        }
    }

    put(ans);
}
