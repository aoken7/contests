#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    for (;;) {
        ll n;
        cin >> n;
        if (n==0) break;

        vector<ll> a(n);
        rep(i, 0, n) cin >> a[i];

        ll ans = *max_element(all(a));

        put(ans);
    }
}