#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, w;
    cin >> n >> w;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];

    vector<pair<ll, ll>> c(n);
    rep(i, 0, n) { c[i] = {a[i], b[i]}; }

    sort(all(c));
    reverse(all(c));

    ll score = 0;
    ll weight = 0;
    for(auto x:c){
        if(weight + x.second <= w){
            score += x.first * x.second;
            weight += x.second;
        }else{
            score += x.first * (w-weight);
            
            put(score);
            return 0;
        }
    }

    put(score);
    return 0;
}
