#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

void input(vector<pair<ll, ll>> &a) {
    rep(i, 0, 4) {
        ll x, y;
        cin >> x >> y;
        a[i] = make_pair(x, y);
    }
}

int solve(vector<pair<ll,ll>> a){
    
}

int main() {
    vector<pair<ll, ll>> a;
    input(a);
    ll ans = solve(a);
    put(ans);
}
