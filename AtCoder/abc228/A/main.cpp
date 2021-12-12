#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll s, t, x;
    cin >> s >> t >> x;

    if (t < s) {
        if (t <= x and x < s)
            put("No");
        else
            put("Yes");
    } else {
        if (s <= x and x < t)
            put("Yes");
        else
            put("No");
    }
}
