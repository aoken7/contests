#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    rep(i, 0, 998244353) {
        if ((n - i) % 998244353 == 0) {
            put(i);
            return 0;
        }
    }
}
