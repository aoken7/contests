//解説見た
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    for (ll a = 1; a * a * a <= n; a++) {
        for (ll b = a; b * b * a <= n; b++) {
            ans += floor(n / double(a * b)) - b + 1;
        }
    }

    put(ans);
}
