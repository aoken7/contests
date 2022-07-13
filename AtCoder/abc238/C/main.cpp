#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll _pow(ll x, ll n){
    ll ans = 1;
    rep(i,0,n) ans *= x;
    return ans;
}

ll f(ll x) {
    ll l = to_string(x).size();
    if (x == 1) return 1;
    if (x < 10) return x - _pow(10,l-1) + f(x-1) + 1;
    return x - _pow(10,l-1) + f(x-1);
}

int main() {
    ll n;
    cin >> n;

    put(f(n+1));
}
