// pdf観た
// Bitごとに独立に計算できるかなと思ったけどいい感じに実装出来なかった
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll oddsolve(ll x) { return (x + 1) / 2 % 2; }

ll f(ll x) {
    if (x % 2 == 1) {
        return oddsolve(x);
    } else {
        return oddsolve(x + 1) ^ (x + 1);
    }
}

int main() {
    ll a, b;
    cin >> a >> b;

    put((f(b) ^ f(a - 1)));
}
