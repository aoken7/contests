#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, k;

ll solve1() {
    ll ans = 0;
    // naive
    rep(a, 1, n + 1) {
        rep(b, 1, n + 1) {
            rep(c, 1, n + 1) {
                rep(d, 1, n + 1) {
                    if (a + b - c - d == k) ans++;
                }
            }
        }
    }
    return ans;
}

int main() {
    cin >> n >> k;

    

    put(solve1());
}
