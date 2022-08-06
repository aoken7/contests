#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> u(m), v(m);
    rep(i,0,m) cin >> u[i] >> v[i];

    vector<vector<ll>> g(n+1);
    map<pair<ll,ll>,ll> mp;
    rep(i,0,m){
        g[u[i]].push_back(v[i]);
        g[v[i]].push_back(u[i]);
        mp[{u[i],v[i]}]++;
    }

    ll ans = 0;

    rep(a,1,n+1){
        rep(b,a+1,n+1){
            rep(c,b+1,n+1){
                if ((mp.count({a,b}) or mp.count({b,a})) and
                    (mp.count({b,c}) or mp.count({c,b})) and 
                    (mp.count({a,c}) or mp.count({c,a}))){
                        ans++;
                    }
            }
        }
    }    
    put(ans);
}
