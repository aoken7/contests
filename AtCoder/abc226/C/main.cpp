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

vector<pair<ll, set<ll>>> a;
vector<ll> art;

ll dfs(ll idx){
    ll time = 0;    
    for (auto x:a[idx].second){
        if(art[x]) continue;
        art[x] = 1;
        time += dfs(x);
    }
    return time + a[idx].first;
}

int main() {
    ll n;
    cin >> n;
    a = vector<pair<ll, set<ll>>>(n);
    art = vector<ll>(n,0);

    rep(i, 0, n) {
        ll t, k;
        cin >> t >> k;
        set<ll> s;
        rep(j,0,k){
            ll tmp;
            cin >> tmp;
            s.insert(tmp-1);
        }
        a[i] = {t, s};
    }

    ll ans = dfs(n-1);

    put(ans);
}
