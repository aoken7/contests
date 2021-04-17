//pdfmita
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> p(m);
    rep(i,0,m){
        ll a, b;
        cin >> a >> b;
        p[i] = {b,a};
    }

    sort(all(p));

    ll pre = -1;
    ll ans = 0;
    
    for(auto x:p){
        if(not(ans > 0 and x.second <= pre)){
            pre = x.first-1;
            ans++;
        }
    }

    put(ans);
}
