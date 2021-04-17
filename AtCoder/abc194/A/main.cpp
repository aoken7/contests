#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll c = a + b;

    if (c >= 15 and b >= 8) {
        put(1);
    } else if (c >= 10 and b >= 3) {
        put(2);
    } else if (c >= 3) {
        put(3);
    } else {
        put(4);
    }
}
